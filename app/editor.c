/**
 * editor.c -- строковый текстовый редактор
 *
 * Copyright (c) 2017, Alexander Borodin <aborod@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"
#include "text/text.h"

#define MAXLINE 255

int main() {
  char cmdline[MAXLINE + 1];
  char *cmd;
  char *arg;

  /* Создаем объект для представления текста */
  text txt = create_text();
  char* fget;
  UNUSED(fget);

  /* Цикл обработки команд */
  while (1) {
    printf("ed > ");

    /* Получаем команду */
    fget = fgets(cmdline, MAXLINE, stdin);

    /* Извлекаем имя команды */
    if ((cmd = strtok(cmdline, " \n")) == NULL) {
      continue;
    }
    /* Распознаем поддерживаемую команду */

    /* Завершаем работу редактора */
    if (strcmp(cmd, "quit") == 0) {
      fprintf(stderr, "Bye!\n");
      break;
    }

    /* Загружаем содержимое файла, заданного параметром */
    if (strcmp(cmd, "load") == 0) {
      if ((arg = strtok(NULL, " \n")) == NULL) {
        fprintf(stderr, "Usage: load filename\n");
      } else
        load(txt, arg);
      continue;
    }

    /* Обмен строки по курсору */
    if (strcmp(cmd, "ch") == 0) {
      ch(txt);
      continue;
    }

    if (strcmp(cmd, "show") == 0) {
      show(txt);
      continue;
    }

    /* Перемещаем перевую строку в конец */
    if (strcmp(cmd, "c1n") == 0) {
      c1n(txt);
      continue;
    }

    /* Выводим строки с цифрами */
    if (strcmp(cmd, "showlineswithdigits") == 0) {
      showlineswithdigits(txt);
      continue;
    }

    /* Если команда не известна */
    fprintf(stderr, "Unknown command: %s\n", cmd);
  }

  return 0;
}

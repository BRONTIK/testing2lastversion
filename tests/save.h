#ifndef SAVE_H
#define SAVE_H

#include <gtest/gtest.h>

extern "C" {
#include "common.h"
#include "stdio.h"
#include "path.h"
}


TEST(test_save1, test1) {

    char in[] = "tests/input/input_save_1.txt";
    char ou[] = "tests/output/output_save_1.txt";
    char ex[] = "tests/expected/expected_save_1.txt";
    
    //копируем строку
    strcpy(path_save, ou);
	
    FILE *output;
    char output_s[255] = { '\0' };
	
    FILE *expected;
    char expected_s[255] = { '\0' };
	
    text txt = create_text();
    load(txt, in);
    save(txt, path_save);
    if((output = fopen(path_save, "r")) == NULL){
        printf("can not open file\n");
        FAIL();
    }
    if((expected = fopen(ex, "r")) == NULL){
        printf("can not open file\n");
        FAIL();
    }
    //поместить внутренний указатель в конец файла
    fseek(output, 0, SEEK_END);
    //вернуть текущее положение внутреннего указателя
    long output_position = ftell(output);
	
    //поместить внутренний указатель в конец файла	
    fseek(expected, 0, SEEK_END);
    //вернуть текущее положение внутреннего указателя
    long expected_position = ftell(expected);
	
    if(!expected_position && !output_position){
        printf("Files are empty\n");
        SUCCEED();
    }
    else{
	
	    //считываем символы
        if(fgets(output_s, 255, output) == NULL){}
        if(fgets(expected_s, 255, expected) == NULL){}
	//проверка C-строк на равенство    
        ASSERT_STREQ(expected_s, output_s);
	//закрываем файлы    
        fclose(output);
        fclose(expected);
    }
}

TEST(test_save2, test2) {

    char in[] = "tests/input/input_save_2.txt";
    char ou[] = "tests/output/output_save_2.txt";
    char ex[] = "tests/expected/expected_save_2.txt";
    
    //копируем строку
    strcpy(path_save, ou);
	
    FILE *output;
    char output_s[255] = { '\0' };
	
    FILE *expected;
    char expected_s[255] = { '\0' };
	
    text txt = create_text();
    load(txt, in);
    save(txt, path_save);
    if((output = fopen(path_save, "r")) == NULL){
        printf("can not open file\n");
        FAIL();
    }
    if((expected = fopen(ex, "r")) == NULL){
        printf("can not open file\n");
        FAIL();
    }
    //поместить внутренний указатель в конец файла
    fseek(output, 0, SEEK_END);
    //вернуть текущее положение внутреннего указателя
    long output_position = ftell(output);
	
    //поместить внутренний указатель в конец файла	
    fseek(expected, 0, SEEK_END);
    //вернуть текущее положение внутреннего указателя
    long expected_position = ftell(expected);
	
    if(!expected_position && !output_position){
        printf("Files are empty\n");
        SUCCEED();
    }
    else{
	
	    //считываем символы
        if(fgets(output_s, 255, output) == NULL){}
        if(fgets(expected_s, 255, expected) == NULL){}
	//проверка C-строк на равенство    
        ASSERT_STREQ(expected_s, output_s);
	//закрываем файлы    
        fclose(output);
        fclose(expected);
    }
}
#endif // SAVE_H

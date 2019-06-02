#ifndef SAVE_H
#define SAVE_H

#include <gtest/gtest.h>

extern "C" {
#include "common.h"
#include "stdio.h"
#include "path.h"
}


TEST(test_save1, test1) {

    char in[] = "testing22/tests/input/input_save_1";
    char ou[] = "testing22/tests/output/output_save_1";
    char ex[] = "testing22/tests/expected/expected_save_1";
    
	//копируем строку
	strcpy(save_path, ou);
    FILE *output;
	char output_s[255] = { '\0' };
	
    FILE *expected;
    char expected_s[255] = { '\0' };
    text txt = create_text();
    load(txt, in);
    save(txt, save_path);
    if((output = fopen(path_save, "r")) == nullptr){
        printf("can not open file\n");
        FAIL();
    }
    if((expected = fopen(ex, "r")) == nullptr){
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
        if(fgets(output_s, 255, output) == nullptr){}
        if(fgets(expected_s, 255, expected) == nullptr){}
	//проверка C-строк на равенство    
        ASSERT_STREQ(expected_s, output_s);
	//закрываем файлы    
        fclose(output);
        fclose(expected);
    }
}
#endif // SAVE_H
#ifndef SHOWDIGITS_H
#define SHOWDIGITS_H

#include <gtest/gtest.h>

extern "C" {
#include "common.h"
#include "stdio.h"
#include "path.h"
}


TEST(digits_test1, test1) {

    char in[] = "tests/input/input_showdigits_1.txt";
    char ou[] = "tests/output/output_showdigits_1.txt";
    char ex[] = "tests/expected/expected_showdigits_1.txt";
    
    strcpy(path_showdigits, ou);

    FILE *out;
    FILE *exp;
    char out_s[255] = { '\0' };
    char exp_s[255] = { '\0' };

    text txt = create_text();
    load(txt, in);
    mwcrsr(txt, 1, 1);
    ch(txt);
    save(txt, path_digits);

    if((out = fopen(path_digits, "r")) ==0){
        printf("can not open file\n");
        FAIL();
    }

    if((exp = fopen(ex, "r")) ==0){
        printf("can not open file\n");
        FAIL();
    }

    //поместить внутренний указатель в конец файла
    fseek(out, 0, SEEK_END);
    //вернуть текущее положение внутреннего указателя
    long output_position = ftell(out);
	
    //поместить внутренний указатель в конец файла	
    fseek(exp, 0, SEEK_END);
    //вернуть текущее положение внутреннего указателя
    long expected_position = ftell(exp);
	
	if(!expected_position && !output_position){
        printf("Files are empty\n");
        SUCCEED();
    }
    else{
	
	    //считываем символы
        if(fgets(out_s, 255, out) ==0){}
        if(fgets(exp_s, 255, exp) ==0){}
	//проверка C-строк на равенство    
        ASSERT_STREQ(exp_s, out_s);
	//закрываем файлы    
        fclose(out);
        fclose(exp);
    }
}

TEST(digits_test2, test2) {

    char in[] = "tests/input/input_showdigits_2.txt";
    char ou[] = "tests/output/output_showdigits_2.txt";
    char ex[] = "tests/expected/expected_showdigits_2.txt";
    
    strcpy(path_showdigits, ou);

    FILE *out;
    FILE *exp;
    char out_s[255] = { '\0' };
    char exp_s[255] = { '\0' };

    text txt = create_text();
    load(txt, in);
    mwcrsr(txt, 1, 1);
    ch(txt);
    save(txt, path_digits);

    if((out = fopen(path_digits, "r")) ==0){
        printf("can not open file\n");
        FAIL();
    }

    if((exp = fopen(ex, "r")) ==0){
        printf("can not open file\n");
        FAIL();
    }

    //поместить внутренний указатель в конец файла
    fseek(out, 0, SEEK_END);
    //вернуть текущее положение внутреннего указателя
    long output_position = ftell(out);
	
    //поместить внутренний указатель в конец файла	
    fseek(exp, 0, SEEK_END);
    //вернуть текущее положение внутреннего указателя
    long expected_position = ftell(exp);
	
	if(!expected_position && !output_position){
        printf("Files are empty\n");
        SUCCEED();
    }
    else{
	
	    //считываем символы
        if(fgets(out_s, 255, out) ==0){}
        if(fgets(exp_s, 255, exp) ==0){}
	//проверка C-строк на равенство    
        ASSERT_STREQ(exp_s, out_s);
	//закрываем файлы    
        fclose(out);
        fclose(exp);
    }
}

TEST(digits_test3, test3) {

    char in[] = "tests/input/input_showdigits_3.txt";
    char ou[] = "tests/output/output_showdigits_3.txt";
    char ex[] = "tests/expected/expected_showdigits_3.txt";
    
    strcpy(path_showdigits, ou);

    FILE *out;
    FILE *exp;
    char out_s[255] = { '\0' };
    char exp_s[255] = { '\0' };

    text txt = create_text();
    load(txt, in);
    mwcrsr(txt, 1, 1);
    ch(txt);
    save(txt, path_digits);

    if((out = fopen(path_digits, "r")) ==0){
        printf("can not open file\n");
        FAIL();
    }

    if((exp = fopen(ex, "r")) ==0){
        printf("can not open file\n");
        FAIL();
    }

    //поместить внутренний указатель в конец файла
    fseek(out, 0, SEEK_END);
    //вернуть текущее положение внутреннего указателя
    long output_position = ftell(out);
	
    //поместить внутренний указатель в конец файла	
    fseek(exp, 0, SEEK_END);
    //вернуть текущее положение внутреннего указателя
    long expected_position = ftell(exp);
	
	if(!expected_position && !output_position){
        printf("Files are empty\n");
        SUCCEED();
    }
    else{
	
	    //считываем символы
        if(fgets(out_s, 255, out) ==0){}
        if(fgets(exp_s, 255, exp) ==0){}
	//проверка C-строк на равенство    
        ASSERT_STREQ(exp_s, out_s);
	//закрываем файлы    
        fclose(out);
        fclose(exp);
    }
}
#endif // SHOWDIGITSH_H

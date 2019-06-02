#ifndef C1N_H
#define C1N_H

#include <gtest/gtest.h>

extern "C" {
#include "common.h"
#include "stdio.h"
#include "path.h"
}


TEST(c1n_test, test1) {

    char in[] = "../testing2lastversion/tests/input_data/input_c1n_1";
    char ou[] = "../testing2lastversion/tests/output_data/output_c1n_1";
    char ex[] = "../testing2lastversion/tests/expected_data/expected_c1n_1";
    
    strcpy(path_c1n, ou);

    FILE *output;
    FILE *expected;
    char output_s[255] = { '\0' };
    char expected_s[255] = { '\0' };

    text txt = create_text();
    load(txt, in);
    
    c1n(txt);
    save(txt, rc_path);

    if((output = fopen(path_c1n, "r")) == nullptr){
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
#endif // C1N_TESTS_H
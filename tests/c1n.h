#ifndef C1N_H
#define C1N_H

#include <gtest/gtest.h>

extern "C" {
#include "common.h"
#include "stdio.h"
#include "path.h"
}


TEST(c1n_test, test1) {

    char in[] = "../../testing2lastversion/tests/input/input_c1n_1";
    char ou[] = "../../testing2lastversion/tests/output/output_c1n_1";
    char ex[] = "../../testing2lastversion/tests/expected/expected_c1n_1";
    
    strcpy(path_c1n, ou);

    FILE *out;
    FILE *exp;
    char out_s[255] = { '\0' };
    char exp_s[255] = { '\0' };

    text txt = create_text();
    load(txt, in);
    
    c1n(txt);
    save(txt, path_c1n);

    if((out = fopen(path_c1n, "r")) ==0){
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
#endif // C1N_TESTS_H

#ifndef CH_TEST_H_
#define CH_TEST_H_
#include "shared.h"

extern "C" {
#include "common.h"
}

TEST(ch_test, test1) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output9.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output9.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input9.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input9.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 1, 2);
   ch(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected9.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected9.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output9.txt", "r") : outputData = fopen("D:/testing2/tests/output/output9.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(ch_test, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output10.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output10.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input10.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input10.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 1, 6);
   ch(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected10.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected10.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output10.txt", "r") : outputData = fopen("D:/testing2/tests/output/output10.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(ch_test, test3) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output11.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output11.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input11.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input11.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 2, 5);
   ch(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected11.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected11.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output11.txt", "r") : outputData = fopen("D:/testing2/tests/output/output11.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(ch_test, test4) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output8empty.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output8empty.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input8empty.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input8empty.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 2, 5);
   ch(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected8empty.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected8empty.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output8empty.txt", "r") : outputData = fopen("D:/testing2/tests/output/output8empty.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

#endif // CH_TEST_H_

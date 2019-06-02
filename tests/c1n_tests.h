#ifndef C1N_TESTS_H
#define C1N_TESTS_H
#include "shared.h"

extern "C" {
#include "common.h"
}


TEST(c1nTest, test1) {

    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output6.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output6.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input6.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input6.txt", MAXLINE);

    load(txt, inFile);

    c1n(txt);
    show(txt);

    returnStream(outputFile, oldstdOut);

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected6.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected6.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output6.txt", "r") : outputData = fopen("D:/testing2/tests/output/output6.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(c1nTest, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output7.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output7.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input7.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input7.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    c1n(txt);
    show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected7.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected7.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output7.txt", "r") : outputData = fopen("D:/testing2/tests/output/output7.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(c1nTest, test3) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output8.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output8.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input8.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input8.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    c1n(txt);
    show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected8.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected8.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output8.txt", "r") : outputData = fopen("D:/testing2/tests/output/output8.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(c1nTest, test4) {
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

    c1n(txt);
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

#endif // C1N_TESTS_H

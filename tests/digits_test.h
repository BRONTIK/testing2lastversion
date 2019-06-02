#ifndef DIGITS_TEST_H
#define DIGITS_TEST_H
#include "shared.h"

extern "C" {
#include "common.h"
}


TEST(digitsTest, test1) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output1d.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output1d.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input1d.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input1d.txt", MAXLINE);
    //TRAVIS ? strcpy(inFile, "tests/input/input1d.txt") : strcpy(inFile, "D:/testing2/tests/input/input1d.txt");
    load(txt, inFile);

    /*
        Run test function
    */

    showlineswithdigits(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected1d.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected1d.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output1d.txt", "r") : outputData = fopen("D:/testing2/tests/output/output1d.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(digitsTest, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output2d.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output2d.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input2d.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input2d.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    showlineswithdigits(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected2d.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected2d.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output2d.txt", "r") : outputData = fopen("D:/testing2/tests/output/output2d.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(digitsTest, test3) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output3d.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output3d.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input3d.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input3d.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    showlineswithdigits(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected3d.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected3d.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output3d.txt", "r") : outputData = fopen("D:/testing2/tests/output/output3d.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(digitsTest, test4) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output4d.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output4d.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input4d.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input4d.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    showlineswithdigits(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected4d.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected4d.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output4d.txt", "r") : outputData = fopen("D:/testing2/tests/output/output4d.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(digitsTest, test5) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output5d.txt", "wb") : outputFile = fopen("D:/testing2/tests/output/output5d.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input5d.txt", MAXLINE) : strncpy(inFile, "D:/testing2/tests/input/input5d.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    showlineswithdigits(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected5d.txt", "r") : expectedData = fopen("D:/testing2/tests/expected/expected5d.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output5d.txt", "r") : outputData = fopen("D:/testing2/tests/output/output5d.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}


#endif // DIGITS_TEST_H

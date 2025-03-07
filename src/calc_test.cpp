#define CLOVE_SUITE_NAME CalculatorTest
#include "clove-unit.h"
#include "calc.h"

CLOVE_TEST(AddTwoPositiveNumbers) {
    int a = 1;
    int b = 2;

    Calculator calc;
    int result = calc.sum(a, b);

    CLOVE_INT_EQ(3, result);
}

CLOVE_TEST(AddTwoNegativeNumbers) {
    int a = -1;
    int b = -2;

    Calculator calc;
    int result = calc.sum(a, b);

    CLOVE_INT_EQ(-3, result);
}

CLOVE_TEST(AddOnePositiveOneNegativeNumber) {
    int a = -1;
    int b = 2;

    Calculator calc;
    int result = calc.sum(a, b);

    CLOVE_INT_EQ(1, result);
}


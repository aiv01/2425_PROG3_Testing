#define CLOVE_SUITE_NAME AivVectorTest
#include "clove-unit.h"
#include "aiv_vector.h"

CLOVE_TEST(CreateEmptyVector) {
    aiv::Vector<int> ints;
    CLOVE_SIZET_EQ(0, ints.size());
}

CLOVE_TEST(AddOneElementToEmptyVector) {
    aiv::Vector<int> ints;

    ints.add(10);
    
    CLOVE_SIZET_EQ(1, ints.size());
    CLOVE_INT_EQ(10, ints[0]);
}

CLOVE_TEST(AddTwoElements) {
    aiv::Vector<int> ints;

    ints.add(10);
    ints.add(20);
    
    CLOVE_SIZET_EQ(2, ints.size());
    CLOVE_INT_EQ(10, ints[0]);
    CLOVE_INT_EQ(20, ints[1]);
}

CLOVE_TEST(GetElementAtIndexWithinRange) {
    aiv::Vector<int> ints;
    ints.add(10);

    CLOVE_INT_EQ(10, ints.at(0));
}

CLOVE_TEST(GetElementAtIndexOutOfRange) {
    aiv::Vector<int> ints;
    ints.add(10);

    bool has_thrown = false;
    try {
        ints.at(5);
    } catch (const std::out_of_range& ex) {
        //CLOVE_PASS();
        //return;
        has_thrown = true;
    }
    //CLOVE_FAIL();
    CLOVE_IS_TRUE(has_thrown);
}

CLOVE_TEST(TestAssertOnOperatorIndex) {
    aiv::Vector<int> ints;
    ints.add(10);

    auto& val = ints[1000];
}
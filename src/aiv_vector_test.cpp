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

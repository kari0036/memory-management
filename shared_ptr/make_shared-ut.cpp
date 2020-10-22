#include <gtest/gtest.h>

#include "make_shared.hpp"

struct Foo {
    Foo(int first, int second, double third)
        : first_(first), second_(second), third_(third) {}

    int first_;
    int second_;
    double third_;
};

TEST(MakeSharedTest, shouldCreateSharedPtrUsingMakeShared) {
    constexpr int firstValue = 1;
    constexpr int secondValue = 2;
    constexpr double thirdValue = 3;

    cs::shared_ptr<Foo> ptr = cs::make_shared<Foo>(firstValue, secondValue, thirdValue);

    ASSERT_EQ(ptr->first_, firstValue);
    ASSERT_EQ(ptr->second_, secondValue);
    ASSERT_EQ(ptr->third_, thirdValue);
}
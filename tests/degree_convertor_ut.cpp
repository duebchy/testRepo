#include <gtest/gtest.h>
#include <lib/lib.h>

TEST(CelsiusToFarenheitSuite, IntegerTest){
    double result = CelsiusToFarenheit(30);
    EXPECT_EQ(result, 86);
}

TEST(CelsiusToFarenheitSuite, DoubleTest){
    double result = CelsiusToFarenheit(30.5);
    EXPECT_EQ(result, 86.9);
}

TEST(FarenheitToCelsiusSuite, IntegerTest){
    double result = FarenheitToCelsius(23);
    EXPECT_EQ(result, -5);
}

TEST(FarenheitToCelsiusSuite, DoubleTest){
    double result = FarenheitToCelsius(23.0);
    EXPECT_EQ(result, -5);
}
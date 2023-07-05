#include "pch.h"
#include "../Calculator/Calculator.cpp"

TEST(CalculatorTest, getSum) {
	Calculator calculator{};
	int a = 0;
	int b = 1;
	auto sum = calculator.getSum(a, b);
	EXPECT_EQ(sum, a + b);
}

TEST(CalculatorTest, getGop) {
	Calculator calculator{};
	int a = 1;
	int b = 2;
	auto multiple = calculator.getGop(a, b);
	EXPECT_EQ(multiple, a * b);
}

TEST(CalculatorTest, getZegop) {
	Calculator calculator{};
	int a = 2;
	auto square = calculator.getZegop(2);
	EXPECT_EQ(square, a*a);
}

TEST(CalculatorTest, getMinus) {
	Calculator calculator{};
	int a = 0;
	int b = 1;
	auto delta = calculator.getMinus(a, b);
	EXPECT_EQ(delta, a - b);
}

TEST(CalculatorTest, getDevide) {
	Calculator calculator{};
	int a = 100;
	int b = 5;
	auto devide = calculator.getDivide(a, b);
	EXPECT_EQ(devide, a / b);
}

TEST(CalculatorTest, getSumSum) {
	Calculator calculator{};
	int a = 0;
	int b = 1;
	int c = 2;
	auto sum = calculator.getSumSum(a, b, c);
	EXPECT_EQ(sum, a + b + c);
}

TEST(CalculatorTest, getDevide2) {
	Calculator calculator{};
	int a = 100;
	int b = 0;
	auto devide = calculator.getDivide(a, b);
	EXPECT_EQ(devide, a / b);
}

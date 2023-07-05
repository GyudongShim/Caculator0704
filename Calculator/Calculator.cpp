#pragma once

class Calculator
{
public:
	int getSum(int a, int b) { return 0; }
	int getGop(int a, int b) { return 0; }
	int getZegop(int a) { return 0; }
	int getMinus(int a, int b) { return 0; }

	// return integer divide ( 3 / 2 is 1 not 1 )
	int getDivide(int a, int b)
	{
		if (b == 0)
		{
			return 0;
		}

		return a / b;
	}

	int getSumSum(int a, int b, int c) { return 0; }
};

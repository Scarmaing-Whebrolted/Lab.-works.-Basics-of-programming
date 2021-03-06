#include "Labwork 6.h"

namespace labwork_6
{
	void input(double& x, double& precision)	// Input of x and precision
	{
		std::cout << "Please, enter a number: ";
		std::cin >> x;
		while (x < 0)	// Checking for forbidden values
		{
			std::cout << "Enter x which isn't less than zero: ";
			std::cin >> x;
		}
		std::cout << "Please, enter the precision: ";
		std::cin >> precision;
	}

	double Arctg(const double x, const double precision)	// Calculation of arctg
	{
		double numerator = x;
		double arctg = numerator;
		double xn = numerator;

		for (int i = 1; precision < xn; i++)
		{
			numerator *= -pow(x, 2);
			xn = numerator / (2 * static_cast<double>(i) + 1);
			arctg += xn;
		}
		return arctg;
	}

	void output(const double& y)	// The output of y
	{
		std::cout << "The y is equal to " << y << std::endl;
	}
}
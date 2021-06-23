#include <iostream>
using namespace std;


extern "C" double max(double a, double b)
{
	return (a > b ? a : b);
}


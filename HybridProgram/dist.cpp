#include <cmath>
#include <iostream>
using namespace std;


extern "C" float dist(float ax, float ay, float az, float bx, float by, float bz)
{
	return (sqrt((ax-bx) * (ax-bx) + (ay-by) * (ay-by) + (az-bz) * (az-bz)));
}

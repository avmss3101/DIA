#include <iostream>
#include <stdio.h>
#include <math.h>

#define PI acos(-1)

using namespace std;

int main(int argc, char **argv)
{
	int t, c;
	double d, v, diam;
	c = 1;
	cin >> t;
	
	while (t--) {
		cin >> d;
		cin >> v;
		
		v = v * 282.0;
		d = d * PI;
		
		v = v*3/d;
		
		diam = sqrt(v*16.0/7.0);
		
		printf ("Case %d: %.3f\n", c, diam);
		c++;
	}
	
	return 0;
}


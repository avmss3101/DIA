#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

#define PI acos(-1);

int main(int argc, char **argv)
{
	double p, l1, l2, l3;
	double ang1, ang2, ang3;
	
	ang3 = (9.0/180.0)*PI;
	ang1 = (81.0/180.0)*PI;
	ang2 = (27.0/180.0)*PI;
	
	while(cin >> p) {
		
		l1 = sin(ang1) * p;
		l3 = sin(ang3) * p;
		l2 = tan(ang2) * l3;
		
		printf("%.10f\n", l1 + l2);
	}
	
	return 0;
}

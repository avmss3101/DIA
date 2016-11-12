#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
	float x, y, r, d1, d2;
	int n;
	
	cin >> n;
	
	while (n--) {
		cin >> x;
		cin >> y;
		cin >> r;
		
		d1 = r - sqrt(x*x + y*y);
		if (d1 < 0)
			d1 = - d1;
		d2 = 2*r - d1;
		if (d1 < d2) {
			float local;
			local = d1;
			d1 = d2;
			d2 = local;
		}
		//cout << d1 << " " << d2 << endl;
		printf("%.2f %.2f\n", d2, d1);
	}
	
	return 0;
}


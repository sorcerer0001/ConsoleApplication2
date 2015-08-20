#include<iostream>
using namespace std;

int main()
{
	int d, h, p, t, a[4];
	for (d = 1; d <= 4; d++) {
		for (h = 1; h <= 4; h++) {
			for (p = 1; p <= 4; p++) {
				for (t = 1; t <= 4; t++) {
					if ((d != h&&d != p&&d != t&&h != p&&h != t&&p != t) 
						&& ((d == 3) + (h == 1) + (p == 2) + (t == 4) == 1)
						&& ((d == 2) + (h == 4) + (p == 3) + (t == 1) == 1)
						&& ((h == 3) + (t == 4) == 1)
						&& ((d == 1) + (h == 3) + (p == 4) + (t == 2) == 1)
						&& ((d + h + p + t) == 10)) {
						cout << d << endl << h << endl << p << endl << t << endl;
						return 0; 
					}
				}
			}
		}
	}
	return 0;
}
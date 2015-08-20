#include<iostream>
using namespace std;

int main()
{
	int n;
	bool isCout = false;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == i) {
			cout << a[i];
			isCout = true;
			break;
		}
	}
	if (!isCout) {
		cout << "N";
	}
	return 0;
}
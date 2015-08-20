
#include<iostream>
using namespace std;

int main()
{
	float arr1[3] = {0}, arr2[3] = { 0 }, price;
	int id, num;
	char kind;
	for (int i = 0; i < 3; i++)
	{
		cin >> id >> num;
		for (int k = 0; k < num; k++)
		{
			cin >> kind >> price;
			arr1[i] += price;
			arr2[int(kind) - 65] += price;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d %.2f\n", i+1, arr1[i]);
		/*cout << i << " " << arr1[i] << endl;*/
	}
	for (int i = 0; i < 3; i++)
	{
		/*cout << char(65 + i) << " " << arr2[i] << endl;*/
		printf("%c %.2f\n", char(65 + i), arr2[i]);
	}


	return 0;
}

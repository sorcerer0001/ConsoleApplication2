#include <iostream>
using namespace std;
int main() {
	int v=0,i=0;
	char *k1,*k2;
	char str[500] = {'\0'};
	k1 = str;
	k2 = str;
	while ((str[i]=getchar())!='\n')
	{
		i++;
	}

	do
	{
		if (*k2==' ' || *k2=='\n')
		{
			for (int i = 1; i < v; i++)
			{
				cout << *(k2 - i);
			}
			v = 0;
			k2 += 1;
			k1 = k2;
			if (*k2!='\0')
			{
				cout << ' ';
			}
		}
		else
		{
			k2 = k1 + v;
		}
		v++;
	} while (*k2!='\0');
	return 0;
}

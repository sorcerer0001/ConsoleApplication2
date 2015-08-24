#include<iostream>
using namespace std;
char s[501];
char *p = s;
void f()
{
	char temp;
	if (*(p + 1) < 'A' || (*(p + 1) > 'Z' && *(p + 1) < 'a') || *(p + 1) > 'z')
	{
		cout << *p;
		return;
	}
	temp = *(p++);
	f();
	cout << temp;
}
int main()
{
	cin.getline(s, 500);
	while (1)
	{
		f();
		p++;
		if (*p < 'A' || (*p > 'Z' && *p < 'a') || *p > 'z')
		{
			if (*p == '\0')
			{
				break;
			}
			cout << *p;
			p++;
		}
	}
	cout << endl;
	return 0;
}
	
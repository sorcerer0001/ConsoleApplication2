#include<iostream>
#include<string.h>
using namespace std;
char c[101] = { '\0' };
int sarr[101],temp=0;
void changeCharOrder(int s,int e)
{
	if (!*(c+e))
	{
		return;
	}
	sarr[temp] = s;
	if (*(c+s)==*(c+e))
	{
		temp++;
		sarr[temp] = e;
		e++;
	}
	else
	{
		cout <<sarr[temp]<<' '<<e<< endl;
		temp--;
		e++;
	}
	changeCharOrder(sarr[temp], e);
}

int main() {
	cin.getline(c, 101);
	int s=0,e=1;
	changeCharOrder(s,e);
	return 0;
}

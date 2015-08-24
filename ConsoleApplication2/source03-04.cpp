#include<iostream>
using namespace std;

int sarr[101];
char s[101];
char s_[101];

int main() {
	int i, n;
	while (cin.getline(s, 101))
	{
		cout << s << endl;
		for (i = 0; s[i]; ++i){
			if (s[i]=='(')
			{
				s_[i]='$';
			}
			else if (s[i] == ')'){
				s_[i]='?';
				n = i;
				while (n>0)
				{
					if (s_[n] == '$')
					{
						s_[n] = ' ';
						s_[i] = ' ';
						n = 0;
					}
					n--;
				}
			}
			else
			{
				s_[i]= ' ';
			}
		}
		cout << s_<<endl;
	}

	return 0;

}

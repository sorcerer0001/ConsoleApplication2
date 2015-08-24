#include<iostream>
using namespace std;

int a[1111];
char s[1111];

int i, n = 0;
int main() {
 cin >> s;
 for (i = 0; s[i]; ++i)
  if (s[i] == '(') a[++n] = i;
  else cout << a[n--] << " " << i << endl;
 return 0;
}

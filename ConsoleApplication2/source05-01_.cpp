#include<iostream>
using namespace std;
const int maxn = 100 + 5;
int matrix[maxn][maxn];

int main()
{
	int *p,*q;
	int k;
	cin >> k;
	while (k--)
	{
		int m,n,i;
		int sum = 0;
		cin >> m >> n;
		for (i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> matrix[i][j];
		}
		p = matrix[0]; q = matrix[m - 1];
		for (i = 0; i < n; i++){
			if (m != 1)
			{
				sum += *p++;
				sum += *q++;
			}
			else
				sum += *p++;
			
		}

		for (i = 1; i < m-1; i++)
		{
			p = &matrix[i][0];
			q = &matrix[i][n - 1];
			if (n != 1)
			{
				sum += *p;
				sum += *q;
			}
			else
				sum += *p;
			
		}
		cout << sum << endl;
	}
	return 0;
}
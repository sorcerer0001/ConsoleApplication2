#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float sum[6];

    for (int i = 0; i < 3; i++){
        int a;
        cin >> a;
        int n;
        cin >> n;
        for (int j = 0; j < n;j++){
            char b;
            cin >> b;
            float c;
            cin >> c;
            if (b == 'A') {
                sum[a- 1] += c;
                sum[3] += c;
            }
            else if (b == 'B') {
                sum[a - 1] += c;
                sum[4] += c;
            }
            else if (b == 'C') {
                sum[a - 1] += c;
                sum[5] += c;
            }
        }
    }
    printf("1 %.2f\n", sum[0]);
    printf("2 %.2f\n", sum[1]);
    printf("3 %.2f\n", sum[2]);
    printf("A %.2f\n", sum[3]);
    printf("B %.2f\n", sum[4]);
    printf("C %.2f\n", sum[5]);
    return 0;
}

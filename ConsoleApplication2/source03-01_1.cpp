#include<iostream>
#include<string.h>
using namespace std;

int changeCharOrder(char table[]) {
    int i = 0, j, k;
    char *sptr = table;     // 设置一个指针sptr获取table
    char reversed[500];       // 设置一个用于存储翻转的字符数组
    strcpy(reversed, sptr);
    while (sptr[i]) {                         // 挨个判断sptr内容到末尾
        while (sptr[i] > 0 && sptr[i] <= ' ') // 遇到空格i补1.
            i++;
        j = i;                                //j在这里存放i//所以在这第一次hello过的时候j从0开始，i=0

        while (sptr[j] > ' ')                 // 统计单词长度（从i到j)
            j++;
        k = j;                                //存储单词结尾j.
        while (i < j)                         // 单词翻转，把正常单词的末尾字符一个个一次从头赋给reversed
            reversed[i++] = sptr[--k];      //i++使i作为下一个单词起始位置
    }
    cout << reversed << endl;
    return 0;
}
int main() {
    char c[500]= { '\0' };
    cin.getline(c,500);

    changeCharOrder(c);
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char word[41];//定义字符数组
	int sum=0,n,t;//定义变量
	cin>>n;//输入单词个数
	t=n;//赋值
	while(n>0)
	{
	scanf("%s",word);//读入一个单词
	if((sum+strlen(word)+1<=80)&&(n!=t)){cout<<' ';sum++;}//如果不超过80个字符，输出空格
	else {cout<<'\n';sum=0;}//否则换行
	sum=sum+strlen(word);//记录字符数（包括空格）
	cout<<word;//输出单词
	memset(word,0,sizeof(word));//清空字符数组
	n--;//计数器减1
	}
    return 0;//结束程序
}
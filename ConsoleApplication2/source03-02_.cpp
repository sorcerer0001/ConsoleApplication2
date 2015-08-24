#include <stdio.h>
int main(int argc, char *argv[])
{
 int i; /*定义要处理的变量*/
 scanf("%d", &i); /*输入变量值*/
 while(i != 1)
 {
  if(i%2)/*奇数*/
  {
   printf("%d*3+1=%d\n", i, i*3+1); /*按题目要求的格式打印出来*/
   i = i*3+1; /*更新变量值*/
  }
  else /*偶数*/
  {
   printf("%d/2=%d\n", i, i/2); /*按题目要求的格式打印出来*/
   i = i/2; /*更新变量值*/
  }
 }
 printf("End"); /*最后打印END*/
 return 0;
}

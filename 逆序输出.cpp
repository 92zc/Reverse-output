#include<stdio.h>
int main()
{
	int i,a[10];
	for(i=0;i<=9;i++)              //对数组元素进行赋值      
	a[i]=i;                       //进行赋值，第几个元素为几
	for(i=9;i>=0;i--)             //输出10个数组元素
		printf("%d",a[i]);
	printf("\n");
	return 0;
}

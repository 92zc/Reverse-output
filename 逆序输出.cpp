#include<stdio.h>
int main()
{
	int i,a[10];
	for(i=0;i<=9;i++)              //������Ԫ�ؽ��и�ֵ      
	a[i]=i;                       //���и�ֵ���ڼ���Ԫ��Ϊ��
	for(i=9;i>=0;i--)             //���10������Ԫ��
		printf("%d",a[i]);
	printf("\n");
	return 0;
}

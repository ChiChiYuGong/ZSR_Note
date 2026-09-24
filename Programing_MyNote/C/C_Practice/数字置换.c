#include <stdio.h>

int main()

{
	int a=0;
	printf ("请输入一个数字：\n");
	
	scanf("%d",&a);
	int b=0,c=0,d=0;
	b=a/100;
	c=(a-b*100)/10;
	d=(a-100*b-10*c);
	int result=0;
	
	result=100*d+10*c+b;
	printf("置换后的数字为%d",result);
	
	return 0;
}

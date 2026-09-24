#include <stdio.h>

int main()

{
	int main=0;
	int a=0,b=0,c=0,d=0;
	printf("请输入一个数字：\n");
	scanf("%d",&a);
	
	b=a/16;
	c=a%16;
	
	d=10*b+c;
	printf("%d",d);
	
	
	return 0;
}

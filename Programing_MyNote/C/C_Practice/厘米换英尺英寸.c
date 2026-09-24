#include <stdio.h>

int main()

{
	printf("请输入一个长度：\n");
	
	
	int a=0;
	scanf("%d",&a);
	
	int b=0;
	int c=0;
	b=a/30.48;
	c=(a/30.48-b)*12;
	
	printf("对应身高为%d英尺，%d英寸。\n",b,c);
	
	return 0;
}

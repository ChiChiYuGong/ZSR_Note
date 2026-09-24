#include <stdio.h>

int main()
{
	int n=0;
	int result=1;
	int i=0;
	
	printf("请输入一个数字n：\n");
	scanf("%d",&n);
	i=n;//把n的数字暂存给i变量 
	
    for(;n>1;n--){
		result*=n;	
	}
	
	printf("%d!=%d",i,result);
	
	return 0;
}

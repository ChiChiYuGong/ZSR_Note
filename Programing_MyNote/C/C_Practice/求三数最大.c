#include <stdio.h>

int main()
{
	int a,b,c;
	printf("请输入三个数字：\n"); 
	scanf("%d %d %d",&a,&b,&c);
	
	int max;

	if(a>b){
		if(a>c){
			max=a;
		}
		else max=c;
	}
	
	if(a<b){
		if(b>c){
			max=b;
		}
		else max=c;
	}
	
	printf("the max is %d",max);
	
	
	return 0;
}  

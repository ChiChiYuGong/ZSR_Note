#include <stdio.h>

int main()
{
	int num=0;
	int x;//x代表每次取余的结果 
	
	printf("输入一个数字：\n");
	scanf("%d",&num);
		
    printf("倒置后的结果是：");
    
	while(num!=0){

	x=num%10;
	num/=10;
	printf("%d",x);
	
    }
    
	if(num=0){
    	printf("%d",num);
	}
    
	
	return 0;
}

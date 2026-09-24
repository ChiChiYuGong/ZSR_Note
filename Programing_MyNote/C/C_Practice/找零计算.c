#include <stdio.h>

int main()
 
{
	//初始化 
	int a=0;
	int b=0;
	
	//读入两个数字 
	printf("请输入票面：\n");
	scanf("%d",&a);
	printf("请输入总金额：\n");
	scanf("%d",&b);
	
	//如果够 
	if (a>=b){
	printf("找您%d元\n",a-b);
	
	
	}
	//如果不够 
	else{
	printf("还差%d元\n",b-a);
	
	}
	
	return 0;
}

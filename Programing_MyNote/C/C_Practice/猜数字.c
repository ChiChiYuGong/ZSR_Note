#include <stdio.h>

int main()
{
	srand(time(0));
	int number=rand()%100+1;//把随机数取后两位加一，变成1到100 
	int count ;
	int a=0;//a是用户输入的数字 
	
    printf("我有一个1到100的数字\n猜一下吧\n"); 
	do{
		count++;
		scanf("%d",&a);
		if(a>number){
			printf("你猜的数字大了\n");
		}else if(a<number){
	    	printf("你猜的数字小了\n"); 
		}
			
	}while(a!=number);
	printf("你猜对了\n"); 
	printf("你一共猜了%d次\n",count);
	return 0;
} 

#include <stdio.h>

int main()
{
	int a=0;//a是要读进来的数的总和 
	int n=0;//n是数的数量
	int b=0;//b是每一轮读进来的数 
	
	printf("请输入一些数字，我来算他们的平均数\n");
	
	 scanf("%d",&b);
	while (b!=-1){
	    n++;
		a+=b;
		scanf("%d",&b);
	}
         //只用while循环，并在末尾改变其条件，避免死循环 
		
	
	printf ("这些数的平均数为%f",1.0*a/n);
	
	return 0;
}

#include <stdio.h>

int main()
{
	int hour1=0,minitue1=0,second1=0; 
	int hour2=0,minitue2=0,second2=0;
	
	printf("please input the first time ,for example:2 30 ,which means 2:30 \n");
	scanf ("%d %d",&hour1, &minitue1);
	
	printf("please input the secend time ,for example:2 30 ,which means 2:30 \n");
	scanf ("%d %d",&hour2 ,&minitue2);
	
	second1=hour1*3600+minitue1*60;
	second2=hour2*3600+minitue2*60;
	/*分别换算两个时间为秒*/ 
	int hour3,minitue3;
	int second3;
	second3=second1-second2;
	
	hour3=second3/3600;
	minitue3=(second3%3600)/60;
	/*小时部分用总秒数/3600取整数部分，分钟部分由总秒数/3600取其余数组成*/ 
	
	printf("时间差为%d小时，%d分钟。\n",hour3,minitue3);
	
	
	return 0;
}

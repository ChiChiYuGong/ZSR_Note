#include <stdio.h>

int main()

{
	int a=0,b=0,c=0,d=0,e=0;
    printf("输入两个数字，分别代表时间和流失的时间\n");
	scanf ("%d %d",&a,&b);
	c=a/100;
	d=a%100;/*e 代表总时间且用分钟来计算*/ 

    e=60*c+d;
    int f=0;
    f=e+b;/*f代表流失后的总时间*/
    
    int g=0;
    g=(f/60)*100+f%60;
	
	printf ("%d",g);
	
	
	return 0;
 } 

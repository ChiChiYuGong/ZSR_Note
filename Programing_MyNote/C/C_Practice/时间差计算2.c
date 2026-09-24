#include <stdio.h>

int main()

{
	int h1,m1;
	int h2,m2;
	/*第一个时间大一些*/
	scanf("%d %d",&h1,&m1);
	scanf("%d %d",&h2,&m2);
	
	int ih=h1-h2;
	int im=m1-m2;
	
	if (im<0){
		im=60+im;
		ih --;
		
	}
	printf ("时间差为%d小时%d分钟",ih,im);
}

#include <stdio.h>
/*英尺和米的计算*/ 
int main()
{ printf("input your height in feet and inches,for example:5 7 ,which means 5 feet and 7 inches:");

double foot=0;
double inch=0;

scanf("%lf %lf",&foot,&inch);

printf("your height is %f.\n",(foot+inch/12)*0.3048);
	
	
	
	return 0;
}

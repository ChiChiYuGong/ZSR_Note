 #include <stdio.h>
 
 int main()
 
 {
 	int a=0;         //a is the number 
 	int x=0;         //x is the tesult
 	scanf("%d",&a);
 	
 	while(a!=0){
 		x++;
 		a/=10;
 		
	 }
 	printf("%d",x);
 	return 0;
 }
 

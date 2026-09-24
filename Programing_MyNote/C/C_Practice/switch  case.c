#include <stdio.h>

int main()
{
	int type;
	
	scanf("%d",&type);
	
	switch (type) {
	
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	default:
		printf("10086");
	    break;
	}
    
	return 0;	
	
}

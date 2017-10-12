#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Zadaj stranu a");
	scanf("%d", &a);
	printf("Zadaj stranu b");
	scanf("%d", &b);
	printf("Zadaj stranu c");
	scanf("%d", &c);
	if(a+b>c && a+c>b && b+c>a)
	{
		printf ("da sa zostrojit");
	}
	else{
		printf ("neda sa zostrojit");

	}
	
	
}

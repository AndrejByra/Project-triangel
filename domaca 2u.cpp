#include <stdio.h>
#include <math.h>

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
		printf ("da sa zostrojit \n");
		if(c==sqrt((a*a)+(b*b)) || a==sqrt((c*c)+(b*b)) || b==sqrt((a*a)+(c*c)))
		{
		printf ("Trojuholnik je pravouhly");
		}
		else
		{printf ("Trojuholnik nie je pravouhly");
		}
		
		
	}
	else{
		printf ("neda sa zostrojit");

	}
	
	
}

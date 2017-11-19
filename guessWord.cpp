#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char estimate;
    char correctWord[7]={'t','r','n','a','v','a','\0'};               
    char underLine[7]={'_','_','_','_','_','_','\0'};
    int attempt=5;
    int i, j;
    for (i=0;i<attempt;i++)
	{
        printf("Enter a letter: ");
        scanf("\n%c", &estimate);
        for (j=0;j<7;j++){
            if (estimate==correctWord[j])
                underLine[j] = estimate;
        }
        printf("Result: %s \n", underLine);
    }
    if (strcmp(correctWord,underLine)==0){
    	printf("You Win.");
	}else{
		printf("You Lose.");
	}
}

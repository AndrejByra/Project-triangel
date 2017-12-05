#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	int a;
	int b;
}mat;
int main(){
	int temps;
	int tempo;
	mat mats[20];
	FILE *f=fopen("cisla.txt","r");
	if(f==NULL){
		printf("ERROR");
		return 1;
	}
	FILE *fr=fopen("vysledok.txt","w");
	if(f==NULL){
		printf("ERROR");
		return 1;
	}
int c=0;
	while(fscanf(f,"%d%d",&mats[c].a,&mats[c].b)!=EOF){
		temps=(mats[c].a)*(mats[c].b);
		tempo=4*(mats[c].a);
		fprintf(fr,"Contents: %d \nCircumference: %d\n",temps,tempo);
		c++;
	}
	fclose(f);
	fclose(fr);
}

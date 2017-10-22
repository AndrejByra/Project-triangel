#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20


int main(){
srand(time(NULL)); 
 int arr[N];
 
 int i;
 for(i=0;i<N;i++){   
      arr[i]=rand()%9990+10;
 }
 
 for(i=0;i<N;i++){   
   printf("%d ", arr[i] );
 }
  int parne=0;
 for(i=0;i<N;i++){    
    if(arr[i]%2==0)
          parne++;
 }
 
 printf("\nParne: %d \nNeparne: %d", parne, N-parne);
 
 
int twodigit=0;
 for(i=0;i<N;i++){   
 	if(arr[i]<100 && arr[i]>10)
 	       twodigit++;
 }
 printf("\nDvoj ciferne cislo: %d", twodigit);
 int threedigit=0;
 for(i=0;i<N;i++){   
 	if(arr[i]<1000 && arr[i]>100)
 	       threedigit++;
 }
 printf("\nTroj ciferne cislo: %d", threedigit);
  int fourdigit=0;
 for(i=0;i<N;i++){   
 	if(arr[i]<10000 && arr[i]>1000)
 	       fourdigit++;
 }
 printf("\nStvor ciferne cislo: %d", fourdigit);
int max;
 max=arr[0];
 for(i=1;i<N;i++){
    if(max<arr[i])
        max=arr[i];
 }
 printf("\nMax number: %d",max);
 
 int min;
 min=arr[0];
 for(i=1;i<N;i++){
    if(min>arr[i])
        min=arr[i];
 }
 printf("\nMin number: %d",min);
 
   printf("\nPole odzadu: ");
 for(i=N-1;i>=0;i--){
      printf("%d ",arr[i]);
}
  	int sedem = 0;
	for(i=0;i<N;i++){
		if(arr[i]%7==0){
			sedem++;
		}
	}
	printf("\nDelitelne 7 je: %d",sedem);
	
	printf("\nPalindrom: ");
	for(i=0;i<N;i++){
		if(arr[i] < 100){
			if(arr[i] %10 == arr[i]/10){printf("%d ", arr[i]);}
		}
		else if(arr[i] < 1000){
			if(arr[i] %10 == arr[i]/100){printf("%d ", arr[i]);}
		}
		else{
			if(arr[i] %10 == arr[i]/1000 && (arr[i] / 10)%10 == (arr[i] / 100) % 10){printf("%d ", arr[i]);}
		}
		
	}
	printf("\n");
		}




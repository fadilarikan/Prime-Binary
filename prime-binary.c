#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x[100];
	int number,counter,i;
	printf("Enter a number :"); scanf("%d",&number);

	for(i=2; i<number; i++){
		if(number%i==0){
			counter++;
		}
	}
	if(counter==0){
		printf("Prime\n");
 }
	else{
		printf("Not prime\n");
	}
i=0;
	while(number>=1){
		i++;
		x[i]=number%2;
		number=number/2;
	}
	printf("binary :");
	while(i>0){
		printf("%d",x[i]);
		i--;
	}
}

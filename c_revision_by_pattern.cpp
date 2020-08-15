#include<stdio.h>

main(){
int a;
printf("Enter number: ");
scanf("%d",&a);
for(int i=0; i<a; ++i){
	for(int j=0; j<=i; ++j){
		printf("*");
	}
	printf("\n");
}
}

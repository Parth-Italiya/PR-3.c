#include<stdio.h>

 main(){
	int i=0,n;

	printf("Enter the value of N: ");
	scanf("%d",&n);
	while(n>0){
		n=n/10;
		i++;
	}
	printf("%d",i);

}

/*
Enter the value of N: 777
3
*/

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

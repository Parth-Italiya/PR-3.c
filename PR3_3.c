/*
Enter a Number: 52
The Sum of 5 and 2 is 7
*/

#include<stdio.h>

 main(){
	int i=0,n,n1,n2,sum;

	printf("Enter a Number: ");
	scanf("%d",&n);
	n2=n%10;
	while(n>=10){
		n=n/10;
	}
	n1=n;
	sum=n1+n2;
	printf("The Sum of %d and %d is %d",n1,n2,sum);

}

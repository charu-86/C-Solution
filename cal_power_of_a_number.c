#include<stdio.h>
int main(){
	int num,power,i,val=1;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Enter power  ");
	scanf("%d",&power);
	
	for(i=1;i<=power;i++){
		val=val*num;
	}
	printf("The value of %d to the power %d is %d",num,power,val);
	return 0;
}
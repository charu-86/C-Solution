#include<stdio.h>
int main()
{
    int n, temp, sum=0, original;
    printf("enter a 5 digit number-");
    scanf("%d", &n);
    original=n;//required for comparison ahed
    while(n>0)//code to reverse a number
	{
		temp=n%10;
		sum=(sum*10)+temp;
		n=n/10;
	}
    printf("Reversed number would be-%d\n", sum);
    if (original==sum)
    {
        printf("The reversed number is equal to the original number !!\n");
       }
    else
    {
        printf("The reversed number is not equal to original number !");
    }
}
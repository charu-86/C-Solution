#include<stdio.h>
int main()
{
    int num, posnum;
    printf("Enter a number->");
    scanf("%d", &num);
    if(num<0)
    {
    	posnum=0-(num);
		printf("Absolute value=%d", posnum);
	}
	else
	{
		printf("Absolute value=%d", num);
	}
}
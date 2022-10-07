#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    double result;
    printf("Enter the number\n");
    scanf("%d", &num);
    result = sqrt(num);
    printf("Sqaure root of %d is %.2f", num, result);



}
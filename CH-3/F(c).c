#include<stdio.h>
int main(){
    //to check if its a triangle
    int A, B, C, sum;
    printf("Enter the angles of the triangle\n");
    printf("ANGLE(A)-");
    scanf("%d", &A);
    printf("ANGLE(B)-");
    scanf("%d", &B);
    printf("ANGLE(C)-");
    scanf("%d", &C);
    sum=A+B+C;
    if (sum==180)
    {
        printf("Triangle will be valid !!");
    }
    else
    {
        printf("Triangle will not be valid !!");
    }
    return 0;
}
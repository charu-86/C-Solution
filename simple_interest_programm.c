/*  Program name is simple interest */
// ---------Formula-----------//
//  p=100*i/r*t
//  r=100*i/p*t
//  t=100*i/p*r
//  i=p*r*t/100
//----------Programm in below------------//
#include<stdio.h>
int main()
{
    int p,r,t,i,num;
    printf("--------------what are you find?--------------");
    printf("\n1.Principal.");   //  p=100*i/r*t
    printf("\n2.Percentage.");  //  r=100*i/p*t
    printf("\n3.Time.");        //  t=100*i/p*r
    printf("\n4.Amount.\n");      //  i=p*r*t/100
    scanf("%d",&num);

    switch(num)     // use case concept for choose option.
    {
        case 1:  //  p=100*i/r*t
            {
                    printf("Enter the amount :");
                    scanf("%d",&i);
                    printf("Enter the percentage :");
                    scanf("%d",&r);
                    printf("Enter the time :");
                    scanf("%d",&t);
                    p=100*i/r*t;
                    printf("The principal is :%d",p);
                    break;
            }
        case 2:  //  r=100*i/p*t
            {
                    printf("Enter the amount :");
                    scanf("%d",&i);
                    printf("Enter the principal :");
                    scanf("%d",&p);
                    printf("Enter the time :");
                    scanf("%d",&t);
                    r=100*i/p*t;
                    printf("The percentage is :%d",r);
                    break;
            }
        case 3:  //  t=100*i/p*r
            {
                    printf("Enter the amount :");
                    scanf("%d",&i);
                    printf("Enter the principal :");
                    scanf("%d",&p);
                    printf("Enter the percentage :");
                    scanf("%d",&r);
                    t=100*i/p*r;
                    printf("The time is :%d",t);
                   break;
            }
        case 4:  //  i=p*r*t/100
            {
                    printf("Enter the principal :");
                    scanf("%d",&p);
                    printf("Enter the percentage :");
                    scanf("%d",&r);
                    printf("Enter the time :");
                    scanf("%d",&t);
                    float i=p*t*r/100;
                    printf("The amount is :%f",i);
                    break;
            }

    }
    return 0;
}
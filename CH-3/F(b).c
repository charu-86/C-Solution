#include<stdio.h>
int main(){
    //to find youngest of three
        int ram, shyam, ajay;
        printf("Enter the age of,\n");
        printf("RAM-");
        scanf("%d",&ram);
        printf("SHYAM-");
        scanf("%d",&shyam);
        printf("AJAY-");
        scanf("%d",&ajay);
        if (ram<shyam & ram<ajay)
            {
                printf("RAM is the youngest among three!!");
            }
        else if(shyam<ram &shyam<ajay)
        {
            printf("SHYAM is the youngest of three !!");
        }
        printf("AJAY is the youngest of three !!");
    return 0;
}
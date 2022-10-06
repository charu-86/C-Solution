#include<stdio.h>
int main(){
    float x1, x2, x3, y1, y2, y3, m, n;
    printf("Enter first points (x1, y1)\n ");
    scanf("%f%f", &x1, &y1);
    printf("Enter first points (x2, y2)\n ");
    scanf("%f%f", &x2, &y2);
    printf("Enter first points (x3, y3)\n ");
    scanf("%f%f", &x3, &y3);
    m = (y2 - y1) / (x2 - x1);//to find slope of first and second point
    n = (y3 - y2) / (x3 - x2);//to find slope of second and third point
    if(m==n)/*If slopes of both these points 
                are equal, then all these 3 points lie on 
                same straight line.*/
    {
    	printf("All 3 points lie on a straight line !!");
    	
	}
	else
	{
		printf("All 3 poinnts does not lie on a straight line");
	}
    return 0;
}
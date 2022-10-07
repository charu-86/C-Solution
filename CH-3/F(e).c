#include<stdio.h>
int main(){
    int l, b, area, peri;
    printf("Enter lenght of a rectangle->");
    scanf("%d", &l);
    printf("Enter breath of a rectangle->");
    scanf("%d", &b);
    area=l*b;
    peri=2*(l+b);
    printf("Area=%d\nPerimeter=%d\n", area, peri);
    if(area>peri)
    {
    	printf("Area of the given rectangle is greater than its perimeter !!");
	}
    else
    {
    	printf("Area of the rectangle is less than the perimeter !!");
	}
    return 0;
}
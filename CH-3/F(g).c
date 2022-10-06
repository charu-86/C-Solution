#include<stdio.h>
#include<math.h>
int main(){
	float cx, cy, x, y, rad, distance;
	printf("Enter circle's center co-ordinates(cx, cy)\n");
	scanf("%f%f", &cx, &cy);
	printf("Enter the radius of the circle\n ");
	scanf("%f", &rad);
	printf("Now enter the points x and y to check its position-\n");
	scanf("%f%f", &x, &y);
	/*if distance of given point and center of circle is greater than radius, its outside the circle
		if its less, the point is inside	
	*/
	distance = sqrt(pow((x-cx),2) + pow((y-cy),2));
	if(distance<rad)
	{
		printf("point(%f, %f) is inside the circle", x, y);
	}
	else if(distance>rad)
	{
		printf("point(%f, %f) is outside the circle", x, y);
	}
	else
	{
		printf("point(%f, %f) is on the circle", x, y);
	}
    return 0;
}
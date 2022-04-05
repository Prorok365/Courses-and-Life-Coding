// Module: circle.c											
// Purpose: Calculates the circumference of the circle, 
//		    circle area, and sphere volume in the same radius. 														
/*************************************************************/

#include <stdio.h>

#define PI 3.14 

int main()
{
	float circumference, area, volume, radius; 
	
	printf("\nPlease enter the wanted radius of a circle: ");
	scanf("%f",&radius ); // Get the radius of a circle
	
	circumference = 2 * PI * radius;	// Circumference of a circle
	area = PI * radius * radius;	// Area of a circle
	volume= (4*PI*radius*radius*radius)/3;	// Volume of a sphere
	
	printf("\n The circumference of the circle: %.2f\n", circumference); 
	printf("\n The area of the circle: %.2f\n", area);
	printf("\n The volume of a sphere: %.2f\n", volume);
	
	return 0;
}
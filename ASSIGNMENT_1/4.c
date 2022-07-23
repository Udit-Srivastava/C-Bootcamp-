/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.*/

#include<stdio.h>
int main()
{
    float r;
    printf("Enter the Radius:");
    scanf("%f",&r);
    printf("Area of circle is %f having the radius %f",3.141*r*r,r);
    return 0;
}
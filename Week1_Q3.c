#include<stdio.h>
void main()
{
    float r,d,c,a;
    printf("Enter the radius of the circle \n");
    scanf("%f",&r);
    d=r*2;
    c=d*3.141;
    a=3.141*r*r;
    printf("The value of the diameter of the circle is %f unit, circumference is %f unit and the area is %f square unit.",d,c,a);
}

#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter the temperature in degree Celsius: \n");
    scanf("%f",&c);
    f=c*1.8;
    f=f+32;
    printf("The value of %f degree celsius in Fahrenheit is %f ",c,f);
}

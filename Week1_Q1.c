#include<stdio.h>
void main()
{
    int a,b,add,sub,mul,div,mod;
    printf("Enter any two numbers: \n");
    scanf("%d %d", &a,&b);
    add=a+b;
    mul=a*b;
    if(a>b)
    {
        sub=a-b;
        div=a/b;
        mod=a%b;
    }
    else
    {
       sub=b-a;
        div=b/a;
        mod=b%a;
    }
    printf("Addition of the two numbers is: %d \n",add);
    printf("Subtraction of the two numbers is: %d \n",sub);
    printf("Multiplication of the two numbers is: %d \n",mul);
    printf("While dividing the greater number by the lesser one, we are getting %d as the quotient and %d as the remainder. \n",div,mod);
}

#include<stdio.h>
int gcd(int num1, int num2){
if(num2 != 0)
    return gcd(num2,num1%num2);
else return num1;
}
int lcm(int num1, int num2){
    return (num1/gcd(num1,num2))*num2;
}
int main(){
int a,b;
printf("Enter two positive integers: \n");
scanf("%d %d",&a,&b);
printf("The GCD of %d and %d is %d ",a,b,gcd(a,b));
printf("and LCM of %d and %d is %d",a,b,lcm(a,b));
return 0;
}

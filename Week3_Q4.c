#include<stdio.h>
int fact(int num){
if(num == 0 || num == 1)
    return 1;
else return num*fact(num-1);
}
int main(){
int a;
printf("Enter a number: \n");
scanf("%d",&a);
printf("The factorial of %d is %d",a,fact(a));
return 0;
}

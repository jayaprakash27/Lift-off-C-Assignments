#include<stdio.h>
int fact(int num){
if(num == 0 || num == 1)
    return 1;
else return num*fact(num-1);
}
int main(){
int a=9;
printf("The factorial of %d is %d",a,fact(a));
return 0;
}

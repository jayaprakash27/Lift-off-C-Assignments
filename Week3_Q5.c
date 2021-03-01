#include<stdio.h>
int palindrome(int num){
    static int rev=0, rem;
    if(num!=0){
        rem = num%10;
        rev= rev*10+rem;
        palindrome(num/10);
    }
    return rev;
}
int main(){
int numb,rev;
printf("Enter a number: \n");
scanf("%d",&numb);
rev = palindrome(numb);
if(numb == rev)
    printf("%d is a palindrome.",numb);
else
    printf("%d is not a palindrome.",numb);
return 0;
}

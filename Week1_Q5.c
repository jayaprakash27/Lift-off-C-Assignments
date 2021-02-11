#include<stdio.h>
    void main()
{
    char a;
    printf("Enter an alphabet. \n");
    scanf("%c",&a);
    switch(a)
    {
    case 'A':
        printf("%c is vowel",a);
        break;
    case 'E':
        printf("%c is vowel",a);
        break;
    case 'I':
        printf("%c is vowel",a);
        break;
    case 'O':
        printf("%c is vowel",a);
        break;
    case 'U':
        printf("%c is vowel",a);
        break;
    case 'a':
        printf("%c is vowel",a);
        break;
    case 'e':
        printf("%c is vowel",a);
        break;
    case 'i':
        printf("%c is vowel",a);
        break;
    case 'u':
        printf("%c is vowel",a);
        break;
    default:
        printf("%c is consonant",a);
    }
}

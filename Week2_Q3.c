#include<stdio.h>
#include<string.h>
int main(){
    char sent[100];
    int words=0,i;
    printf("Enter a sentence: \n");
    scanf("%[^\n]",sent);

    for(i=0; sent[i]!='\0'; i++){
        if(sent[i]== ' '){
            words++;
        }
    }
    printf("Number of words in the sentence is %d", words+1);
    return 0;
}

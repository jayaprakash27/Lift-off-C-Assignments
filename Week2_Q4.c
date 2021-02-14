#include<stdio.h>
int main(){
    int arr[10],i,sma,lar;
    printf("Enter the array: \n");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    sma=arr[0],lar=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]<sma){
            sma=arr[i];
        }
        if(arr[i]>lar){
            lar=arr[i];
        }

    }printf("\n The largest number in the array is : %d", lar);
        printf("\n The smallest number in the array is : %d", sma);
   return 0;
}

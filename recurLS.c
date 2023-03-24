#include<stdio.h>
int linearSearch(int ar[],int size,int k){
    if(size==0){
    return 0;
    }
    if(ar[0]==k){
        return 1;
    }
    else{
        int remainingpart=linearSearch(ar+1,size-1,k);
         return remainingpart;
    }
}
int main()
{
    int ar[1000]={};
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("Enter the elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter the key: ");
    int k;
    scanf("%d",&k);
    int ans=linearSearch(ar,size,k);
    if(ans){
        printf("\n found");
    }
    else
        printf("\n not found");
    return 0;
}
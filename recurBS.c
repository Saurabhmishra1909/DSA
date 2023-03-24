#include<stdio.h>
int binarySearch(int ar[],int s,int e,int k){
    if(s>e){
    return -1;
    }
    int mid=(s+e)/2;
    if(ar[mid]==k){
        return mid;
    }
    else if(mid<k){
        return binarySearch(ar,mid+1,e,k);
    }
    else{
         return binarySearch(ar,s,mid-1,k);
    }
}
int main()
{
    int ar[1000]={};
    int size;
    printf("Enter the size: \n");
    scanf("%d",&size);
    printf("Enter the elements: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    int s=0;
    int e=size-1;
    printf("Enter the key: ");
    int k;
    scanf("%d",&k);
    int ans=binarySearch(ar,s,e,k);
    if(ans!=-1){
        printf("\n found at positon %d",ans+1);
    }
    else
        printf("\n not found");
    return 0;
}
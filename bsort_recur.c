#include<stdio.h>
// it is sorting technique in which we compare adjacent elements in each path/iteration
// ex:

void bsort(int a[],int n){
    if(n==0 ||n==1)
    return;
    for(int i=0;i<n-1;i++){
        int temp;
        if(a[i]>a[i+1]){
        //    swap(a[i],a[i+1]);
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
    bsort(a,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bsort(a,n);
    for(int i=0;i<n;i++){
        printf(a[i]);
    }
    return 0;
}
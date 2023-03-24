#include<stdio.h>
void main()
{
    int arr[5]={11,2,9,16,15};
    int n=5,i=1,temp=0;
    while(temp!=n)
    {
        if(i<n)
        {
            if( arr[temp]<arr[i])
            {
                printf("\n%d->%d",arr[temp],arr[i]);
                temp++;
                i=temp;
            }
            i++;

        }
        else{
            printf("\n%d->-1",arr[temp]);
            temp++;
            i=temp;
            i++;
        }
    }
}
#include<iostream>
using namespace std;

int  partition(int arr[],int s,int e){
    int pivot=arr[s];

    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
    }
    if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j--]);
    }
}

void quicksort(int arr[],int s,int e)
{
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);

    quicksort(arr,p+1,e);
}

int main()
{
    cout<<"Enter number of values"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"Sorted array by quicksort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    return 0;
}
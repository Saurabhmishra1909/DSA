#include<iostream>
using namespace std;
bool binarySearch(int ar[],int s,int e,int k){
    if(s>e){
    return false;
    }
    int mid=s+(e-s)/2;
    if(ar[mid]==k){
        return true;
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
    int ar[5]={3,3,1,4,2};
    int s=0;
    int e=4;
    int k;
    cin>>k;
    bool ans=binarySearch(ar,s,e,k);
    if(ans){
        cout<<"found"<<" ";
    }
    else
    cout<<"not found"<<" ";
    return 0;
}
#include<iostream>
using namespace std;
bool linearSearch(int ar[],int size,int k){
    if(size==0){
    return false;
    }
    if(ar[0]==k){
        return true;
    }
    else{
         bool remainingpart=linearSearch(ar+1,size-1,k);
         return remainingpart;
    }
}
int main()
{
    int ar[5]={3,3,1,4,2};
    int size=5;
    int k;
    cin>>k;
    bool ans=linearSearch(ar,size,k);
    if(ans){
        cout<<"found"<<" ";
    }
    else
    cout<<"not found"<<" ";
    return 0;
}
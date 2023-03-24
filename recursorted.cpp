#include<iostream>
using namespace std;
bool isSorted(int ar[],int size){
    if(size==0||size==1){
    return true;
    }
    if(ar[0]>ar[1]){
        return false;
    }
    else{
         bool remainingpart=isSorted(ar+1,size-1);
         return remainingpart;
    }
}
int main()
{
    int ar[5]={3,3,1,4,2};
    int size=5;
    bool ans=isSorted(ar,size);
    if(ans){
        cout<<"true"<<" ";
    }
    else
    cout<<"false"<<" ";
    return 0;
}
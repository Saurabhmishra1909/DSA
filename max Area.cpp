#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//void pGE(int arr[],int size,int n){
//     int count=1,k=1;
//     if(size==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     int max=arr[size-1];
//     for(int j=size-2;j>=0;j--){
//         if(arr[j]>max){
//             count++;
//         }
//         else{
//              break;
//          }
//     }
//     for(int j=size;j<n;j++){
//         if(arr[j]>max){
//             k++;
//         }
//         else{
//              break;
//          }
//     }
//     cout<<count<<" "<<k;
//     int b=k+count;
//     //cout<<b*max<<endl;
//     pGE(arr,size-1,n);
// }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                count++;
            }
            else{
                break;
            }
        }
        // for(int r=i+1;r<n;r++){
        //     if(arr[r]>arr[i]){
        //         count++;
        //     }
        //     else{
        //         break;
        //     }
        // }
        cout<<count<<endl;
    }
    //pGE(arr,n,n);
    return 0;
}
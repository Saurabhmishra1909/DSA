#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
   // int max=-9999;
  //  int min=9999;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=i-1;j>=0;j--){
            if(a[j]<a[i]){
                cout<<a[j];
            }
            else{
                break;
            }
            // cout<<c<<endl;
        }
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                cout<<a[j];
            }
            else{
                break;
            }
        }
    //     int area=c*a[i];
    //     cout<<a[i]<<" ka l*b -->("<<a[i]<<"*"<<c<<") = "<<area<<endl;
    //     cout<<endl;
    //     if(area<min){
    //         min=area;
    //     }
    //     if(area>max){
    //         max=area;
    //     }
    }//cout<<endl;
    // cout<<"Upar sabhi me se: "<<endl;
    // cout<<min<<" minimum area hoga"<<endl;
    // cout<<max<<" maximum area hoga"<<endl;

    return 0;
}
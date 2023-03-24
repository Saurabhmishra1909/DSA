#include<bits/stdc++.h>
using namespace std;
// void print(int arr[],int n){
//     stack<int> s;
//     for(int i=0;i<n;i++){
//         if(s.empty()==true){
//             cout<<-1;
//             s.push(arr[i]);
//         }
//         if(s.empty()==false){
//             if(s.top()>arr[i]){
//                 cout<<s.top()<<endl;
//             }
//             else{
//                 s.pop();
//             }
//         }
//     }

// }

int main()
{
     int m;
    cout<<"Enter size of array: "<<endl;
    cin>>m;
	int arr[m];
    //  = { 11, 13, 21, 3 ,36};
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

	// int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
	// print(arr, m);
     stack<int> s;
    for(int i=0;i<m;i++){
        if(s.empty()==true){
            cout<<-1<<endl;
            s.push(arr[i]);
        }
        if(s.empty()==false){
            if(s.top()>arr[i]){
                cout<<s.top()<<endl;
            }
            else{
                s.pop();
            }
        }
    }
    return 0;
}
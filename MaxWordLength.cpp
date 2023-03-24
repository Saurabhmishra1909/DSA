#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0;
    int currLength=0,maxLength=0;
    int st=0,maxst=0;
    while(1){
        if(a[i]==' ' || a[i]=='\0'){
            if(currLength>maxLength){
                maxLength=currLength;
                maxst=st;
            }
            currLength=0;
            st=i+1;        
        }
        else{
            currLength++;
        }
        if(a[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLength<<endl;
    for(int i=0;i<maxLength;i++){
        cout<<a[i+maxst];
    }
    return 0;
}
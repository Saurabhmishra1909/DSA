#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numers: "<<endl;
    cin>>a>>b;
    cout<<" Enter + for addition\n Enter - for subtraction\n Enter * for multiplication\n Enter / for divisionion\n Enter % for remainder"<<endl;
    char op;
    cin>>op;
    switch(op){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        case '%':
        cout<<a%b<<endl;
        break;
        default:
        cout<<"Invalid Operator!"<<endl;
        break;
    }
}

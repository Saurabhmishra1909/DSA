#include<iostream>
using namespace std;
 int funtail(int n){
     if(n==0)
        return 0;
         cout<<n<<endl;
         funtail(n-1);
}
int funhead(int n){
     if(n==0)
        return 0;
        funhead(n-1);
         cout<<n<<endl;
}
// the fun call gets on saving in the stack and then it is popped one by one


int main()
{
    int n;
    cin>>n;
    funhead(n);
    funtail(n);
    return 0;
}
#include<iostream>
using namespace std;
 int funtail(int n){
     if(n==0)
        return 0;
         funtail(n-1);
         cout<<n<<endl;
         funtail(n-1);
}
// the fun call gets on saving in the stack and then it is popped one by one


int main()
{
    int n;
    cin>>n;
    funtail(n);
    return 0;
}
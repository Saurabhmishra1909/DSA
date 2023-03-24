// guess the op
#include<iostream>
using namespace std;
void fun(int n){
    cout<<n<<endl;
    n--;
    if(n>=0)
    fun(n);
    cout<<n<<endl;

}
int main()
{
    int n=3;
    fun(n);
    return 0;
}
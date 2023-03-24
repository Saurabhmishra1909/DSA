#include<iostream>
using namespace std;

int main()
{
    
    return 0;
}
// With DP:
// memo={0:1,1:1}
// def findstep(n):
// if n in memo:
// return memo [n]
// else:
// v=findstep(n-1)+findstep(n-2)
// memo[n]=v
// return v 
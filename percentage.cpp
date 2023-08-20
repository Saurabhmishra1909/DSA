#include<iostream>
using namespace std;

int main()
{
    int n;
	cin>>n;
	int a[n]={20,20,22,21,22};
	float arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	float sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i]*arr[i];
	}
	cout<<sum*10/105;
    return 0;
}
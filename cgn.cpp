// nearest greatest element
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
	stack<int> s;

	s.push(arr[0]);

	for (int i =1;i<n;i++) {

		if (s.empty()) {
			s.push(arr[i]);
			continue;
		}
		while (s.empty() == false && s.top() < arr[i]) {
			cout << s.top() << " --> " << arr[i] << endl;
			s.pop();
		}
		s.push(arr[i]);
	}

	while (s.empty() == false) {
		cout << s.top() << " --> " << -1 << endl;
		s.pop();
	}
}

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
	print(arr, m);
	return 0;
}

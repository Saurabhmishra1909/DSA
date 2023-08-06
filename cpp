#include <bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        double sum, n1;
        deque<double> d;
        double n, k;
        cin >> n >> k;
        n1 = n-2*k;
        while(n--)
        {
            int x;
            cin >> x;
            d.push_back(x);
        }
        sort(d.begin(),d.end());
        while(k--)
        {
            d.pop_front();
            d.pop_back();
        }
        cout << fixed << setprecision(6) << ((accumulate(d.begin(),d.end(), 0.00))/n1) << endl;
    }
	return 0;
}

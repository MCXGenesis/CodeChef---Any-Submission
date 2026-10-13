#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
	// your code goes here
	int t,k,n,m;
	cin >> t;
	    for (int i = 0; i < t; i++) {
	        k,n,m = 0;
	        cin >> k >> n;
	        vector<int> arr(k);
	        for (int j = 0; j < k; j++) {
	            cin >> arr[j];
	        }
	        sort(arr.rbegin(), arr.rend());
	        for (int j = 0; j < n; j++) {
	            m = m+arr[j];
	        }
	       // cout << arr[k-1] << endl;
	        cout << m << endl;

	    }
}

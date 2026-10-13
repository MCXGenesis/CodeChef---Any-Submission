#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a[3], m;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    for (int j = 0; j < 3; j++) {
	        cin >> a[j];
	    }
		m = a[0];
        for (int j = 0; j < 3; j++) {
			if(a[j]>m) m = a[j];
		}
		cout << m << endl;
	}

}

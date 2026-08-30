#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin >> N;
    N=N%10;
    if (N>1) cout << 10-N;
    else cout << 10;
}

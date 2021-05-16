#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// view the image in this repository for better understanding
		// sort the vector in non-increasing order
		sort(a.rbegin(), a.rend());
		int pay = 0;
		for (int i = 0; i < n; i++) {
			if ((i + 1) % 4 == 1 || (i + 1) % 4 == 2) {
				// if the remainder of ('i' + 1) and 4 is equal to 1 or 2, then we need to pay it
				pay += a[i];
			}
		}
		cout << pay << '\n';
	}
	return 0;
}

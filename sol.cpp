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
		vector<int> p(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		vector<int> new_p = p; // create a sorted version of the given sequence
		sort(new_p.begin(), new_p.end());
		int l = -1;
		int r = -1;
		for (int i = 0; i < n; i++) {
			if (new_p[i] != p[i]) { // find the smallest element that is not match in the sorted sequence
				l = i;
				for (int j = l; j < n; j++) {
					if (p[j] == new_p[l]) { // find where it is located in the original sequence
						r = j;
						break;
					}
				}
				break;
			}
		}
		reverse(p.begin() + l, p.begin() + r + 1); // reverse the sequence from l to r (a[l], a[l + 1], ... a[r])
		for (int i = 0; i < n; i++) {
			cout << p[i] << " ";
		}
		cout << '\n';
  }	
	return 0;
}
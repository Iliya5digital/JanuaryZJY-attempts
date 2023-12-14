#include<bits/stdc++.h>
using namespace std;
#define int long long
string x, s; 

int n, m;

bool check() {
	for (int i = 0; i + m - 1 < n; i++) {
		int j = i + m - 1;
		string to = "";
		for (int k = i; k <= j; k++) to += x[k];
		if (to == s) return true;
	}
	return false;
}
void solve() {
	cin >> n >> m;
	cin >> x >> s;

	for (int i = 0; i < 12; i++) {
		if (check()) {
			cout << i << endl;
			return ;
		}
		x += x;
		n *= 2;
	}

	cout << -1 << endl;
}
signed main( ) {
	//freopen("in.txt", "r", stdin);
	int t; cin >> t;
	while (t--) solve();

	return 0;
}

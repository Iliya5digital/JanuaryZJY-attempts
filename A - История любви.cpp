#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	string a = "codeforces";
	while(T--) {
		string s;
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < 10; i++) {
			if (a[i] != s[i]) cnt++;
		}
		cout << cnt << endl;
	}
}

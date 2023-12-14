#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--) {
        int n;
        cin >> n;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            if (x & 1) cnt1 += x;
            else cnt2 += x;
        }
        cout << (cnt2 > cnt1 ? "YES\n" : "NO\n");
	}
    return 0;
}

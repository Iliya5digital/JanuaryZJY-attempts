#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--) {
        int n;
        cin >> n;
        int ans = 0, cnt = 0;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            if (x == 0) cnt++;
            else {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        ans = max(ans, cnt);
        cout << ans << endl;
	}
}

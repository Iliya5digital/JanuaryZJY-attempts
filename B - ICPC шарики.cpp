#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mp[26] = {};
        for (int i = 0; i < n; i++) {
            mp[s[i] - 'A']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            ans += (mp[i] + (mp[i] > 0));
        }
        cout << ans << endl;
	}
    return 0;
}

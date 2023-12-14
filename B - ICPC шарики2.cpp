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
        int mp[26] = {0};
        for (int i = 0; i < n; i++) {
            mp[s[i] - 'A']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            ans += (mp[i] + 1);
        }
        cout << ans << endl;
	}
    return 0;
}

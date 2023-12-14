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
        int cnt = 0;
        int m = 0, e = 0, o = 0, w = 0;
        while (s[cnt] == 'M' || s[cnt] == 'm') {
            m = 1;
            cnt++;
        }
        while (s[cnt] == 'E' || s[cnt] == 'e') {
            e = 1;
            cnt++;
        }
        while (s[cnt] == 'O' || s[cnt] == 'o') {
            o = 1;
            cnt++;
        }
        while (s[cnt] == 'W' || s[cnt] == 'w') {
            w = 1;
            cnt++;
        }

        cout << (cnt == n && m && e && o && w ? "YES\n" : "NO\n");
	}
    return 0;
}

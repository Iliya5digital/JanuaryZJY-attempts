#include <bits/stdc++.h>

//#include "LocalDebug.h"

using namespace std;

#define int long long
#define pb push_back

const int inf = 0x3f3f3f3f;
const long long llinf = (long long)0x3f3f3f3f3f3f3f3f;
const long long MOD = (long long)1e9 + 7LL;
const size_t N = (size_t)1e6 + 5;

#define IO                       \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);             \
    std::cout.tie(0)


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n % 2) {
        cout << "-1\n";
        return;
    }
    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            l++;
        }
        else {
            r++;
        }
    }
    if (l != r) {
        cout << "-1\n";
        return;
    }


    stack<int> sta;
int num = 1;


    vector<int> a(n);
    a[0] = 1;
    num = 1;
    sta.push(0);
    for (int i = 1; i < n; i++) {
        if (sta.empty()) {
            if(s[0] != s[i]) {
                a[i] = 2;
                num = 2;
                continue;
            } 

            sta.push(i);
            a[i] = 1;
            continue;
        }
        if (s[i] == s[sta.top()])
            {
                sta.push(i);
                a[i] = 1;
                continue;
            }
        if(s[i] != s[sta.top()] && !sta.empty()){
            sta.pop();
            a[i] = 1;
            continue;
        }
    }

    while(!sta.empty()) {
        a[sta.top()] = 2;
        sta.pop();
    }

    cout << num << endl;
    for (auto x : a) {
        cout << x << " ";
    }
    cout << endl;
}   

signed main() {
    IO;
    int T;
    T = 1; 
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

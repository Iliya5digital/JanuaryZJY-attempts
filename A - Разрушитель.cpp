#include <bits/stdc++.h>

//#include "LocalDebug.h"

using namespace std;

#define int long long
#define pb push_back
#define VI vector<int>

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
    VI a(110);
    VI num(110);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        num[a[i]]++;
    }

    //debugList1(a);
    //debugList1(num);

    if (num[0] == 0) {cout << "NO\n"; return;}
    for (int i = 1; i <= 109; i++) {
        if (num[i] > num[i - 1]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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

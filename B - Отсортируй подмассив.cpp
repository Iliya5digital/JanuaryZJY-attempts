#include <bits/stdc++.h>
//#define LOCAL
#ifdef LOCAL
#include "LocalDebug.h"
#endif

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
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0;  i < n; i++) {
        cin >> b[i];
    }

    int l = 0, r = n - 1;
    while (a[l] == b[l]) {
        l++;
    }
    while (a[r] == b[r]) {
        r--;
    }
    while (l > 0 && b[l] >= b[l - 1]) {
        l--;
    }
    while (r < n - 1 && b[r] <= b[r + 1]) {
        r++;
    }

    cout << l + 1 << " " << r + 1 << endl;
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

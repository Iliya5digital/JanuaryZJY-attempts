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
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    int ans = inf;
    int sum = 0;    
    priority_queue<int, vector<int>, greater<>> h;
    for (int i = 0; i < n; i++) {
        h.push(r[i] - l[i] + 1);
        sum += (r[i] - l[i] + 1);

        while (sum >= k) {
            int tem = k - (sum - (r[i] - l[i] + 1)) + l[i] - 1;
            ans = min(ans, 2 * (int)h.size() + tem);
            sum -= h.top();
            h.pop();
        }
    }

    if (ans == inf) {
        ans = -1;
    }
    
    cout << ans << endl;
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

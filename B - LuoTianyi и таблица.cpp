#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <cstring>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
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
    int n, m;
    int x, y;
    cin >> x >> y;
    n = max(x, y);
    m = min(x, y);
    vector<int> a(n * m);
    for (int i = 0; i < n * m; i++) {
        cin >> a[i];
    }

    sort (a.begin(), a.end());

    int f1 = llabs(a.back() - a[0]);
    int s1 = llabs(a.back() - a[1]);
    int ans1 = s1 * (m - 1) + f1 * (n - 1) * m;

    int f = llabs(a[0] - a[n * m - 1]);
    int s = llabs(a[0] - a[n * m - 2]);

    int ans2 = s * (m - 1) + f * (n - 1) * m;

    int ans = max(ans1, ans2);
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

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
// #define LOCAL
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
// int pre[N];
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int>pre(n + 10,0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort (a.begin(), a.end());
    int sum = 0;
    for(int i = 1;i <= n;i++)
        pre[i] = pre[i - 1] + a[i - 1];
    // debugList1(pre);
    for (int i = 0; i <= k; i++) {
        sum = max(pre[n - k + i] - pre[i * 2],sum);
        // debug1(sum);
    }

    // for (int i = 0, j = 0; i <= k; i += 2, j++) {
    //     sum = max(pre[n - k + j] - pre[i],sum);
    // }
    cout << sum << endl;
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

// 10 11 12 13 15 22
// 

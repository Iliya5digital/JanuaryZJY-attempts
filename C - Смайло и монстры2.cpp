#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define endl '\n'
#define VI vector<int>
#define pii pair<int, int>
#define rep(i, j, k) for (int i = j; i <= k; ++i)
#define per(i, j, k) for (int i = j; i >= k; --i)
#define print(a) cout << a << endl;

const int inf = 0x3f3f3f3f;
const long long llinf = (long long)0x3f3f3f3f3f3f3f3f;
const long long MOD = (long long)1e9 + 7LL;
const size_t N = (size_t)1e6 + 5;

#define IO                       \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);             \
    std::cout.tie(0)

#define debug(a) std::cerr << "\033[34m" << #a << ':' << a << "\033[0m" << endl

#define debugList(list)                        \
    std::cerr << "\033[34m" << #list << ": ["; \
    for (auto& e : list) {                     \
        std::cerr << e << ", ";                \
    }                                          \
    std::cerr << "\b\b]\033[0m" << endl

void solve(int cs) {
    int n;
    cin >> n;
    VI a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());

    int x = 0, ans = 0;
    int l = 0, r = n - 1;
    while (l <= r) {
        if (l == r) {
            if (a[r] == 0) break;
            if (a[r] == 1) ans++;
            else {
                ans += ((a[r] - x + 1) >> 1);
                ans++;
            }
            break;
        }

        if (x + a[l] < a[r]) {
            x += a[l];
            ans += a[l];
            a[l] = 0;
            l++;
        }
        else {
            a[l] -= (a[r] - x);
            ans += (a[r] - x);
            a[r] = 0;
            x = 0;
            ans++;
            r--;
        }
    }
 
    // if (a[r]) {
    //     if (a[r] == 1) ans++;
    //     else {
    //         ans += ((a[r] - x + 1) >> 1);
    //         ans++;
    //     }
    // }

    cout << ans << endl;
}   

signed main() {
    IO;
    int T, TT = 1;
    T = 1; 
    cin >> T;
    while (T--) {
        solve(TT++);
    }
    return 0;
}






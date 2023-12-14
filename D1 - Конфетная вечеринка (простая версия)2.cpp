#include <bits/stdc++.h>

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

#define debug(a) std::cerr << "\033[34m" << #a << ':' << a << "\033[0m" << std::endl

#define debugList(list)                        \
    std::cerr << "\033[34m" << #list << ": ["; \
    for (auto& e : list) {                     \
        std::cerr << e << ", ";                \
    }                                          \
    std::cerr << "\b\b]\033[0m" << endl

void solve() {
    int n;
    cin >> n;
    VI a(n + 5);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int ave = sum / n;
    if (sum % n) {
        cout << "No\n";
        return;
    }
    
    VI sx(40), sy(40);
    bool flag = 1;
    for (int i = 0; i < n; i++) {
        flag = 1;
        for (int x = 0; x < 40; x++) {
            for (int y = 0; y < 40; y++) {
                if (a[i] + (1 << x) - (1 << y) == ave) {
                    sx[x]++;
                    sy[y]++;
                    flag = 0;
                    break;
                }
            }
            if (!flag) break;
        }
        if (flag) {
            cout << "No\n";
            return;
        }
    }

    if (sx == sy) cout << "Yes\n";
    else cout << "No\n";
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

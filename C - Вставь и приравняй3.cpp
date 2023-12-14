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

#define otto auto

void solve(int cs) {
    int n;
	cin >> n;
	VI a(n);
	set<int> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	} 
	if (n == 1) {
		cout << "0\n";
		return;
	}
	int mx = *max_element(a.begin(), a.end());
	
	int g = mx - a[0];
	for (int i = 1; i < n; i++) {
		g = (a[i] != mx ? __gcd(g, a[i] - a[i - 1]) : g);
	}
	
	
	int ans = 0;
	for (int i = 0; i <= n; i++) {
		if (!s.count(mx - g * i)) {
			ans = i;
			return;
		}
	}
	if (ans == 0) ans = n;
	for (int i = 0; i < n; i++) {
		ans += (mx - a[i] / g);
	}
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

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
	int n, m, d; cin >> n >> m >> d;
	int a[m + 2];
	for(int i = 1; i <= m; i++) 
		cin >> a[i];
	
	a[0] = 1;
	a[m + 1] = n + 1;
	
	int maxv = 0, cnt = 0;
	int ans = 1;
	for(int i = 1; i <= m; i++) {
		if(a[i] == a[i - 1]) continue;
		ans += (a[i] - a[i - 1] - 1) / d + 1;
		
		int x = (a[i + 1] - 1 - a[i - 1]) / d;
		int y = (a[i] - 1 - a[i - 1]) / d + (a[i + 1] - 1 - a[i]) / d + 1;
		
		if(y - x == maxv) cnt++;
		if(y - x > maxv) {
			maxv = y - x;
			cnt = 1;
		}
	}
	
	if(maxv == 0) cnt = m;
	ans += (n - a[m]) / d;
	
	cout << ans - maxv << " " << cnt << '\n';
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
 

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

bool isPrime[N];
int Prime[N], cnt;
void GetPrime (){
	for (int i = 2; i <= N; i++){
		if (isPrime[i] == false) {
			Prime[++cnt] = i;
        }
		for (int j = 1; j <= cnt && i * Prime[j] <= N; j++) {
			isPrime[i * Prime[j]] = true;
			if (i % Prime[j] == 0) {
                break;
            }
		} 
	}
}

bool f[100100];

void solve() {
    memset(f, false, sizeof(f));
    int n;
    cin >> n;
    //cout << "1 ";
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j *= 2) {
            if (!f[j]) {
                f[j] = true;
                cout << j << " ";
            }
        }
    }
    cout << "\n";
    // for (int i = 0; i < 20; i++) {
    //     cout << Prime[i] << " ";
    // }
}   

signed main() {
    GetPrime();
    IO;
    int T;
    T = 1; 
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

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
const size_t N = (size_t)2e5 + 5;

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

int f[N][21],g[N][21];
int lg[N], a[N], b[N];
void init(){
    lg[1]=0;
    for(int i=2;i<N;i++) lg[i]=lg[i>>1]+1;
}
void calc(int n){
    for(int j=0;j<20;j++)
        for(int i=1;i+(1<<j)-1<=n;i++)
            if(!j) f[i][j]=a[i],g[i][j]=b[i];
            else{
                f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);
                g[i][j]=min(g[i][j-1],g[i+(1<<(j-1))][j-1]);
            }
}
int query_max(int l,int r){
    int k=lg[r-l+1];
    return max(f[l][k],f[r-(1<<k)+1][k]);
}
int query_min(int l,int r){
    int k=lg[r-l+1];
    return min(g[l][k],g[r-(1<<k)+1][k]);
}

void solve(int cs) {
    int n;
    cin >> n;
    rep(i, 1, n) {
        cin >> a[i];
    }
    rep(i, 1, n) {
        cin >> b[i];
    }
    rep(i, 1, n) {
        if (a[i] > b[i]) {
            cout << "NO\n";
            return;
        }
    }calc(n);
    
    vector<VI > p(n + 1);
    rep(i, 1, n) p[i].push_back(0);
    rep(i, 1, n) p[a[i]].push_back(i);
    rep(i, 1, n) p[i].push_back(n + 1);
    
    rep(i, 1, n) {
        if (b[i] == a[i]) continue;
        int t = b[i];
        int f = 0;
        int r = lower_bound(p[t].begin(), p[t].end(), i) - p[t].begin();
        int l = r - 1;
        l = p[t][l], r = p[t][r];
        if (l != 0) if (query_max(l, i) == t && query_min(l, i) == t) f = 1;
        if (r != n + 1) if (query_max(i, r) == t && query_min(i, r) == t) f = 1;
        if (!f) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}   

signed main() {
    IO;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int T, TT = 1;
    T = 1; 
    cin >> T;
    init();
    while (T--) {
        solve(TT++);
    }
    return 0;
}

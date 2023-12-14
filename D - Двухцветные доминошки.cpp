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

char g[510][510];
int n, m;
bool ok;

void row() {
    for(int i = 0; i < n; i++){
        char x = 'W';
        int num = 0;
        for(int j = 0; j< m; j++){
            if(g[i][j] == 'U'){
                if (x == 'W') {
                    g[i][j] = 'B';
                }
                else {
                    g[i][j] = 'W';
                }
                x = g[i][j]; 
                num++;
            } else if (g[i][j] == 'D') {
                if (g[i - 1][j] == 'W') {
                    g[i][j] = 'B';
                }
                else {
                    g[i][j] = 'W';
                }
                num++;
            } 
        }
        if(num % 2) {
            ok = false;
        }
    }
}

void column() {
    for(int j = 0; j< m; j++){
        char x = 'W';
        int num = 0;
        for(int i = 0; i<n; i++){
            if(g[i][j] == 'L'){
                if(x == 'W') {
                    g[i][j] = 'B';
                }
                else {
                    g[i][j] = 'W';
                }
                x = g[i][j];
                num++;
            } else if(g[i][j] == 'R'){
                if(g[i][j - 1] == 'W') {
                    g[i][j] = 'B';
                }
                else {
                    g[i][j] = 'W';
                }
                num++;
            } 
            
        }
        if(num % 2) {
            ok = false;
        }
    }
}

void solve() {
    cin >> n >> m;

    for(int i = 0;i<=n;i++) 
        for(int j = 0;j<=m;j++)
            g[i][j] = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }

    ok = true;
    row();
    column();
    if(ok){
        for(int i = 0; i < n;i++){
            for(int j = 0; j < m; j++){
                putchar(g[i][j]);
            }
            putchar('\n');
        }
    }
    else {
        cout<<-1<<endl;
    }
}   

signed main() {
    //IO;
    int T;
    T = 1; 
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

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
    for (auto &e : list)                       \
    {                                          \
        std::cerr << e << ", ";                \
    }                                          \
    std::cerr << "\b\b]\033[0m" << endl


int n;
string tks[N];
VI a[7][7];

void init() {
    string str;
    for (int i = 1; i <= n; i++)
    {
        cin >> str;
        tks[i] = str;
        int l = str.length();
        int sum = 0;
        for (int i = 0; i < l; i++)
        {
            sum += str[i] - '0';
        }
        int t = 0;
        a[l][0].push_back(sum);
        for (int i = 0; i < str.length(); i++)
        {
            t = t + str[i] - '0';
            a[l][i + 1].push_back(sum - 2 * t);
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        sort(a[i][0].begin(), a[i][0].end());
        for (int j = 1; j <= 5; j++)
        {
            sort(a[i][j].begin(), a[i][j].end());
        }
    }
}

int work() {
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (tks[i].length() == 1)
        {
            int t = tks[i][0] - '0';
            ans += upper_bound(a[1][0].begin(), a[1][0].end(), t) - lower_bound(a[1][0].begin(), a[1][0].end(), t);
            ans += upper_bound(a[3][1].begin(), a[3][1].end(), t) - lower_bound(a[3][1].begin(), a[3][1].end(), t);
            ans += upper_bound(a[5][2].begin(), a[5][2].end(), t) - lower_bound(a[5][2].begin(), a[5][2].end(), t);
        }
        if (tks[i].length() == 3)
        {
            int t = tks[i][0] - '0' + tks[i][1] - '0' - (tks[i][2] - '0');
            ans += upper_bound(a[1][0].begin(), a[1][0].end(), t) - lower_bound(a[1][0].begin(), a[1][0].end(), t);
            t = (tks[i][0] - '0') + (tks[i][1] - '0') + (tks[i][2] - '0');
            ans += upper_bound(a[3][0].begin(), a[3][0].end(), t) - lower_bound(a[3][0].begin(), a[3][0].end(), t);
            ans += upper_bound(a[5][1].begin(), a[5][1].end(), t) - lower_bound(a[5][1].begin(), a[5][1].end(), t);
        }
        if (tks[i].length() == 5)
        {
            int t = 0;
            for (int j = 0; j < 5; j++)
                t += tks[i][j] - '0';
            ans += upper_bound(a[5][0].begin(), a[5][0].end(), t) - lower_bound(a[5][0].begin(), a[5][0].end(), t);
            t -= 2 * (tks[i][4] - '0');
            ans += upper_bound(a[3][0].begin(), a[3][0].end(), t) - lower_bound(a[3][0].begin(), a[3][0].end(), t);
            t -= 2 * (tks[i][3] - '0');
            ans += upper_bound(a[1][0].begin(), a[1][0].end(), t) - lower_bound(a[1][0].begin(), a[1][0].end(), t);
        }
        if (tks[i].length() == 2)
        {
            int t = tks[i][0] - '0' + tks[i][1] - '0';
            ans += upper_bound(a[2][0].begin(), a[2][0].end(), t) - lower_bound(a[2][0].begin(), a[2][0].end(), t);
            ans += upper_bound(a[4][1].begin(), a[4][1].end(), t) - lower_bound(a[4][1].begin(), a[4][1].end(), t);
        }
        if (tks[i].length() == 4)
        {
            int t = 0;
            for (int j = 0; j < 4; j++) t += tks[i][j] - '0';
            ans += upper_bound(a[4][0].begin(), a[4][0].end(), t) - lower_bound(a[4][0].begin(), a[4][0].end(), t);
            t -= (tks[i][3] - '0') * 2;
            ans += upper_bound(a[2][0].begin(), a[2][0].end(), t) - lower_bound(a[2][0].begin(), a[2][0].end(), t);
        }
    }
    return ans;
}


void solve(int cs)
{ 
    cin >> n;
    init();
    
    cout << work();
}

signed main()
{
    IO;
    int T, TT = 1;
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve(TT++);
    }
    return 0;
}

#include<iostream>
#include<cstring>
#include<vector>
#include<set>
using namespace std;
using LL = long long;

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<pair<int, int> > p(n);
        int mx1 = 0, mx2 = 0;
        LL sum = 0;
        for(int i = 0; i < n; i++){
            cin >> p[i].first >> p[i].second;
            sum += 1LL * p[i].first * p[i].second;
            mx1 = max(mx1, p[i].first);
            mx2 = max(mx2, p[i].second);
        }

        auto check = [&](int x){
            multiset<pair<int, int> > s[2];
            for(auto [x, y] : p){
                s[0].insert({x, y});
                s[1].insert({y, x});
            }
            LL cur = x, len = sum / x;
            for(int i = 0; !s[i].empty(); i ^= 1){
                if (s[i].rbegin()->first != cur) return false;
                while(!s[i].empty() && s[i].rbegin()->first == cur){
                    auto [x, y] = *s[i].rbegin();
                    s[i].erase(s[i].lower_bound({x, y}));
                    s[i ^ 1].erase(s[i ^ 1].lower_bound({y, x}));
                    len -= y;
                }
                swap(len, cur);
            }
            return cur == 0;
        };

        set<pair<LL, LL> > ans;
        if (sum % mx1 == 0 && check(mx1)) ans.insert({mx1, sum / mx1});
        for(int i = 0; i < n; i++)
            swap(p[i].first, p[i].second);
        if (sum % mx2 == 0 && check(mx2)) ans.insert({sum / mx2, mx2});
        cout << ans.size() << '\n';
        for(auto [x, y] : ans)
            cout << x << ' ' << y << '\n';
    }

}

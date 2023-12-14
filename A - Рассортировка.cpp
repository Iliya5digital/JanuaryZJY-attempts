#include <bits/stdc++.h>

using namespace std;

long long a[600];
long long d[600];

void solve() {
    int n;
    cin >> n;
    cin >> a[0];
    int f = 0;
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        d[i - 1] = a[i] - a[i - 1];

        if (d[i - 1] < 0) {
            f = 1;
        }
    }

    if (f) {
        cout << 0 << endl;
        return;
    }

    sort (d, d + n - 1);

    cout << d[0] / 2 + 1 << endl;
}   


int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll findval(ll value) {
    ll z = value / 2;
    ll result = (z + 1) * z + (z + 1) * (value - 2 * z);
    return result;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n, m, r, c, k;
        cin >> n >> m >> r >> c >> k;
        --r;//for taking as 0 indexing as in quetion given in indexed as 1. 
        --c;//
        if (n == 1) {//base case.
            cout << 1 << endl;
            continue;
        }
        ll value = 0;
        if (k == 1) {
            value += 1;
            value += min(r, m - 1 - c);
            value += min(n - 1 - r, m - 1 - c);
            value += min(n - 1 - r, c);
            value += min(r, c);
            cout << value << endl;
            continue;
        }
        --k;
        ll cells_in_source;
        if (r % 2 == 0) {
            cells_in_source = n / 2 + n % 2;
        } else {
            cells_in_source = n / 2;
        }
        value += cells_in_source;
        for (int i = 0; i < 2; ++i) {
            ll addablevalue = 0;

            ll last_r = r, last_c = c;
            last_c += (k / 2) * (n - 1) * 2;
            if (k % 2 == 1) {
                last_r = n - 1 - last_r;
                last_c += (n - 1);
            }
            ll column_dist;
            column_dist = min(last_c, m - 1) - c;

            addablevalue += (column_dist / 2) * n;

            if (column_dist % 2 == 1) {
                addablevalue += (n - cells_in_source);
            }
            if (last_c < m) {
                addablevalue += findval(last_r);
                addablevalue += findval(n - 1 - last_r);

                ll arg;
                arg = max(0LL, last_r - (m - 1 - last_c));
                addablevalue -= findval(arg);

                arg = max(0LL, n - 1 - last_r - (m - 1 - last_c));
                addablevalue -= findval(arg);
            }
            r = n - 1 - r;
            c = m - 1 - c;

            value += addablevalue;
        }
        cout << value << endl;
    }
    return 0;
}

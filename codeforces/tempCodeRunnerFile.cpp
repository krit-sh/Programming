#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while(t--) {
        ll l, r;
        cin >> l >> r;
        cout << ((r + 1) / 2 - l / 2) / 2 << endl;
    }

    return 0;
}
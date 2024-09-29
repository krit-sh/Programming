#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<string> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = n - 1; i >= 0; i--) {
            for (ll j = 0; j < 4; j++) {
                if (a[i][j] == '#') {
                    cout << j + 1 << " ";
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
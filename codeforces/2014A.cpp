#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll c = 0, rob = 0;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) 
            cin >> a[i];
        
        
        for (ll i = 0; i < n; i++) {
            if (a[i] >= k)
                rob += a[i]; 
            
            else if (a[i] == 0 && rob > 0) {
                c++; 
                rob--;
            }
        }
        cout << c << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        ll maxi=0, mini=1000000;
        for(ll i=0;i<n;i++){
            ll x=v[i];
            maxi=max(maxi,x);
            mini=min(mini,x);
        }
        cout<<((maxi-mini)*(n-1))<<"\n";
    }
}
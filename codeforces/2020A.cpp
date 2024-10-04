#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int func(ll n, ll k){
    if(k==1) return n;
        ll c=0;
        while(n){
            c += n%k;
            n/=k;
        }return c;
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        cout<<func(n,k)<<"\n";
    }
}
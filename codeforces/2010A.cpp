#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        signed esum=0,osum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                osum+=a[i];
            }else{
                esum+=a[i];
            }
        }
        cout<<signed(osum-esum)<<endl;

    }
}
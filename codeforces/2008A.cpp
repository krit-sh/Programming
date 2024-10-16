#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a%2)cout<<"NO\n";
        else{
            if(b%2==0)cout<<"YES\n";
            else{
                if(a==0)cout<<"NO\n";
                else cout<<"YES\n";
            }
        }
    }
}
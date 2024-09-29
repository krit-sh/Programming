#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        int c=(a+b)/2;
        cout<<(c-a)+(b-c)<<endl;
    }
}
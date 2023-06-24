#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define isON(n,k)(((n)>>(k)) & 1)


void solve(){
    ll n,x,a; cin >>n>>x>>a;
    ll sum = a /x;
    ll ans= n/sum;
    if(n%sum!=0)
        ans++;
    cout<<ans<<endl;
}

int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
} 
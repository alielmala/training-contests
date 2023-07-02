#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define isON(n,k)(((n)>>(k)) & 1)


void solve(){
    ll n; cin>>n;
    ll arr[n];
    int c=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]!=0)
            c++;
    }
    cout<<c<<endl;
}

int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define isON(n,k)(((n)>>(k)) & 1)


void solve(){
    ll n; cin>>n;
    ll arr[10001]={0};
    for(int i=0;i<n;++i){
        int a;cin>>a;
        arr[a]++;
    }
    ll maxx=0;
    for(int i=0;i<10001-1;++i){
        if(arr[i]+arr[i+1]>maxx)
            maxx= arr[i]+arr[i+1];
    }
    cout<<maxx<<endl;
}

int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
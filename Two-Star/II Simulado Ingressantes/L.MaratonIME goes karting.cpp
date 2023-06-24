#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define isON(n,k)(((n)>>(k)) & 1)

void FAST()
{
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    FAST();
    ll n; cin>>n;
    ll arr[n];
    ll m;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    ll maxx=-1;
    for(int i=0;i<n;++i){
        if(arr[i]>maxx){
            maxx=arr[i];
            m=i;
        }
    }
    bool f=0;
    for(int i=0;i<n;++i){
        if(arr[i]==maxx&&i!=m)
            f=1;
    }
    if(f)
        cout<<-1;
    else
        cout<<m+1;
}

int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

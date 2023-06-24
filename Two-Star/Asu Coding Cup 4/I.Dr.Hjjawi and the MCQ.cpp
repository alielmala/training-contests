#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define isON(n,k)(((n)>>(k)) & 1)


void solve(){
    ll n; cin >>n;
    string s; cin >>s;
    int freq[6]={0};
    for (int i=0;i<n;++i){
        ll x =s[i]-'a'+1;
        freq[x]++;
    }
    sort(freq,freq+6);
    cout << freq[1]<<" "<<freq[5]<<endl;
}

int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
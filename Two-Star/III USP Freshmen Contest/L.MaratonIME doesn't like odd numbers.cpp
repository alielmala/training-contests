#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define isON(n,k)(((n)>>(k)) & 1)



void solve(){
    ll n; cin >>n;
    ll arr[n];
    ll odd=0,sum=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]%2!=0)
            odd++;
        sum+=arr[i];
    }
    sort(arr,arr+n);
    if(odd%2!=0){
        for(int i=0;i<n;++i){
            if(arr[i]%2!=0){
                sum-=arr[i];
                break;
            }
        }
    }
    cout<<sum<<endl;
}

int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
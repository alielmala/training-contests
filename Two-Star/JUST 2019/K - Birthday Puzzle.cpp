#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define isON(n,k)(((n)>>(k)) & 1)

void solve(){
    ll n; cin>>n;
    ll arr[n],sum=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=1;i<(1<<n);++i){
        vector<ll> nums;
        ll orr=0;
        for(int k=0;k<n;++k){
            if(isON(i,k)){
                nums.push_back(arr[k]);
            }

        }
        if(nums.size()==1){
            sum+=nums[0];
        }
        else{
            orr = nums[0];
            for(int k=1;k<nums.size();++k){
                orr = nums[k]| orr;
            }
            sum+=orr;
        }
    }
    cout<<sum<<endl;
}

int main() {
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
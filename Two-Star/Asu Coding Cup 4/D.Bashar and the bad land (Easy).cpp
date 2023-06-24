#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define endl "\n"
#define F first
#define S second

void fast(){
    ios_base::sync_with_stdio(false), ios::sync_with_stdio(false);
    cin.sync_with_stdio(false), cout.sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}

//////////////////////////////////////////////////////
// think of  brute force, greedy, equation, frequency, prefix, sorting (two pointers) and binary search
// think of applying operations on greatest/smallest element till works (multiset/heap)
//const int N = 200005;
//ll frq[130];



void solve(){
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    ll l = 0, c = 0, ans = INT_MAX;
    bool f = 0;

    for(int r=0; r<n; r++){
        c+=arr[r];
        while(c >= x){
            ans = min(ans, r-l+1);
            c-=arr[l++];
            f=1;
        }
    }

    f == 1 ?   cout << ans << endl : cout << -1 << endl;

}

int main(){
    //freopen("consecutive_cuts_chapter_1_validation_input.txt", "r", stdin);
    //freopen("second_friend_output.txt", "w", stdout);
    fast();
    int t = 1;
//    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}

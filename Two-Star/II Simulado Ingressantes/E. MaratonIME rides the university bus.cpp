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
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    for(int i=1; i<n; i++){
        arr[i] = arr[i] + arr[i-1];
    }
//    for(int i=1; i<n; i++){
//        cout << arr[i] << " ";
//    }
//    cout << endl;

    while(m--){
        ll a,b,temp;
        cin >> a >> b;
        if(a == 1 || b == 1){
             temp = arr[b-1];
        }
        else{
             temp = arr[b-1]-arr[a-1-1];
        }
        if(temp % 2 != 0) cout << "Nao" << endl;
        else cout << "Sim" << endl;
    }
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

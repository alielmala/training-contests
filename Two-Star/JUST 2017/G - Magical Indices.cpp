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
    int n;
    cin >> n;
    int arr[n], prefix[n], suffix[n], sorted[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        prefix[i] = arr[i];
        suffix[i] = arr[i];
        sorted[i] = arr[i];
    }

    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] += prefix[i-1];
    }

    suffix[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        suffix[i] += suffix[i+1];
    }
/////////////////////////////////////////
    int prefixSort[n], suffixSort[n];
    sort(sorted, sorted+n);

    for(int i=0; i<n; i++){
        prefixSort[i] = sorted[i];
        suffixSort[i] = sorted[i];
    }

    prefixSort[0] = sorted[0];
    for(int i=1; i<n; i++){
        prefixSort[i] += prefixSort[i-1];
    }

    suffixSort[n-1] = sorted[n-1];
    for(int i=n-2; i>=0; i--){
        suffixSort[i] += suffixSort[i+1];
    }

    int ans = 0;

    for(int i=1; i<n-1; i++){
        if(prefix[i] == prefixSort[i] && suffix[i] == suffixSort[i]){
//            cout << "i = " << i << endl;
            ans++;
        }
    }
    cout << ans << endl;
}

int main(){
    //freopen("consecutive_cuts_chapter_1_validation_input.txt", "r", stdin);
    //freopen("second_friend_output.txt", "w", stdout);
    fast();
    int t = 1;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}

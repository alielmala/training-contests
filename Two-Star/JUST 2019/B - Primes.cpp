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


bool is_prime(int n){ // o(sqrt(n))
    if(n==1) return false;
    for(int p=2; p*p <= n; p++){
        if(n%p==0){
            return false;
        }
    }
    return true;
}

void solve(){
    int n;
    cin >> n;

    if(is_prime(n-2) != 1 || n == 2){
        cout << -1 << endl;
    }
    else{
        cout << 2 << " " << n-2 << endl;
    }
}



int main(){
    //freopen("consecutive_cuts_chapter_1_validation_input.txt", "r", stdin);
    //freopen("second_friend_output.txt", "w", stdout);
    fast();
    int t = 1;
//    cin >> t;
     while(t--){
        solve();
    }
    return 0;
}

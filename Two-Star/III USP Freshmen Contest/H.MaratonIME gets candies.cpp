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

string good(ll mid, string s){

    if(s == "=") return "=";
    else if(s == "<") return "<";
    else if (s == ">") return ">";

}

void solve(){

    ll l = 1, r = 1e9;

    while(r >= l){
        ll mid = (l+r)/2;
        cout << "Q " << mid << endl;
        cout.flush();
        string s;
        cin >> s;

        if(good(mid, s) == "="){
            break;
        }
        else if (good(mid, s) == ">"){
            l = mid + 1;
        }
        else if (good(mid, s) == "<"){
            r = mid - 1;
        }
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
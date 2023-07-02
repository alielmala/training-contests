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
    vector<pair<string, int>> v;

    while(n--){
    string s;
    cin >> s;
    int m;
    cin >> m;
    v.push_back({s, m});
    }

//    cout << v.size() << endl;
//    for(auto it : v){
//        cout << it.D << endl;
//    }

    int cnt = 0;

    for(int i=1; i<=100; i++){
        double temp = i;
        for(int j=0; j<v.size(); j++){
            if(v[j].F == "ADD") temp = temp + v[j].S;
            else if(v[j].F == "SUBTRACT") temp = temp - v[j].S;
            else if(v[j].F == "MULTIPLY") temp = temp * v[j].S;
            else if(v[j].F == "DIVIDE") temp = temp / v[j].S;
            if(temp < 0 || temp - (int)temp != 0){
                cnt++;
                break;
            }

        }
    }

    cout << cnt << endl;


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

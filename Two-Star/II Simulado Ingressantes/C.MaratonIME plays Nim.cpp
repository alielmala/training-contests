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
    int x,y;
    cin >> x >> y;

    while(x!=0 || y!=0){

        //max(x,y)
        bool f=0;
        if(x>y){
            f=1;
        }


        if(f){
            if(x-(x-y)!=0){

                cout << 1 << " " << x-y << endl;
                x -= x-y;
            }
            else{
                cout << 1 << " " << x << endl;
            }
        }
        else{
            if(y-(y-x)!=0){
                cout << 2 << " " << y-x << endl;
                y -= y-x;
            }
            else{
                cout << 2 << " " << y << endl;
            }

        }

        if(x==0 || y==0) break;

        cout.flush();
        int a,b;
        cin >> a >> b;
        if(a==1)x-=b;
        else if (a==2) y-=b;

        if(x==0){
            cout << 2 << " " << y << endl;
            return;
        }
        else if (y==0){
            cout << 1 << " " << x << endl;
            return;
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

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define isON(n,k)(((n)>>(k)) & 1)

void FAST()
{
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    FAST();
    ll n,m; cin>>n>>m;
    string str [n];
    for(int i=0;i<n;++i)
        cin>>str[i];
    ll coins=0,maxx=0;
    int f=0;
    for(int i=0;i<n;++i){
        if(f){
            for(int j=m-1;j>=0;--j){
                if(str[i][j]=='.'){
                    coins++;
                }
                else if(str[i][j]=='L')
                    coins=0;
                maxx=max(coins,maxx);

            }
            f=0;

            continue;
        }
        else{
            for(int j=0;j<m;++j){
                if(str[i][j]=='.'){
                    coins++;
                }
                else if(str[i][j]=='L')
                    coins=0;
                maxx=max(coins,maxx);

            }
            f=1;
            continue;
        }
    }
    if(coins<0)
        cout<<0<<endl;
    else
        cout<<maxx<<endl;
}

int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
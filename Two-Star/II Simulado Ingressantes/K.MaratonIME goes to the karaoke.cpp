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
    string str; cin >>str;
    int freq[27];
    for(int i=0;i<str.size();++i){
        int x=i+1,c=0;
        while(str[x]==str[i]){
            x++;
            i++;
            c++;
        }
        if(c>0){
            cout<<str[i]<<c+1;
        }
        else{
            cout<<str[i]<<1;
        }
    }
}

int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
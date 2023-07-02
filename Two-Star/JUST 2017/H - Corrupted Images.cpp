#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
void solve() {
    ll n,m;
    cin >>n>>m;
    string str[n];
    for(int i=0;i<n;++i)
        cin>>str[i];
    ll q=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(str[i][j]=='1')
                q++;
        }
    }
    if(q<n+n+m+m-4){
        cout<<-1<<endl;
    }
    else{
        //top
        int c=0;
        for(int i=0;i<m;++i){
            if(str[0][i]=='0')
                c++;
        }
        for(int i=0;i<m;++i){
            if(str[n-1][i]=='0')
                c++;
        }
        for(int i=1;i<n-1;++i){
            if(str[i][0]=='0')
                c++;
        }
        for(int i=1;i<n-1;++i){
            if(str[i][m-1]=='0')
                c++;
        }
        cout<<c<<endl;
    }

}

int main() {
    int t = 1;
    cin >>t;
    while (t--) {
        solve();
    }
    return 0;
}

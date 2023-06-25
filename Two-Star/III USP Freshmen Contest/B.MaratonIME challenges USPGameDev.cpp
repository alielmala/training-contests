#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define isON(n,k)(((n)>>(k)) & 1)



void solve(){
    ll a,b,x,y; cin>>a>>b>>x>>y;
    a*=a;
    b*=b;
    x*=x;
    y*=y;
    double rus = sqrt(x+y);
    double wil = sqrt(a+b);
    if(rus>wil)
        cout<<"Russo"<<endl;
    else if(rus<wil)
        cout<<"Wil"<<endl;
    else
        cout<<"Empate"<<endl;
}

int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
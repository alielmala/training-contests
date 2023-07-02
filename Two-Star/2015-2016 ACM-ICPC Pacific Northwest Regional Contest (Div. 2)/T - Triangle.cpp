#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

#define isON(n,k)(((n)>>(k)) & 1)
void solve() {
    ld a[3],b[3];
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    sort(a,a+3);
    sort(b,b+3);
    if(a[0]==b[0]&&a[1]==b[1]&&a[2]==b[2]){
        ld x = pow(a[0],2)+pow(a[1],2);
        x= sqrt(x);
        if(x==a[2]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
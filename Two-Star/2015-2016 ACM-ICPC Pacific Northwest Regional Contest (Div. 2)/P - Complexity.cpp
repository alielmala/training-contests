#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

#define isON(n,k)(((n)>>(k)) & 1)
void solve() {
    string  str;
    cin >>str;
    int freq[27]={0};
    for(int i=0;i<str.size();++i)
        freq[str[i]-'a']++;
    int x =-2;
    for(int i=0;i<27;++i){
        if(freq[i]>0)
            x++;
    }
    sort(freq,freq+27);
    ll sum=0;
    if(x<=0)
        cout<<0<<endl;
    else{

        for(int i=0;i<27;++i){
            if(x==0)
                break;
            if(freq[i]>0){
                sum+=freq[i];
                x--;
            }
        }
        cout<<sum<<endl;
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
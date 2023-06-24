#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void FAST()
{
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    FAST();
    ld n,m,k;
    cin>>n>>m>>k;
    ll sv=ceil(n*0.7);
    ll x=(sv-k);
    if(n-m>=sv-k)
        cout<<max(x,0ll)<<endl;
    else
        cout<<-1<<endl;
    ll ans= ((k+(n-m))/n)*100;
    cout<<ans<<endl;



    return 0;
}

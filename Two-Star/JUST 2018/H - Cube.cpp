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

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=n/6;
        ans=sqrt(ans);
        if(ans==0)
            cout<<1<<endl;
        else
            cout<<ans<<endl;
    }





    return 0;
}

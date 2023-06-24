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
    int n;
    cin>>n;
    int arr[n];
    ll frq[100001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frq[arr[i]]++;
    }
    ll ans=0;

    for(ll i=1;i<=100000;i++)
    {
        if(frq[i]>0)
        {
            ll x=1;
            //cout<<ans<<endl;
            for(ll j=1;j<=frq[i];j++)
            {
                x*=2,x=x%1000000007;

            }
            ans+=(x-1);
            ans%=1000000007;
           // cout<<ans<<endl;
        }
    }
    cout<<ans<<endl;

    return 0;
}
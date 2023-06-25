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
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        sum-=arr[i];
        ans+=(sum*arr[i]);
    }
    cout<<ans;

    return 0;
}

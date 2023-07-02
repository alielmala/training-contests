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

    int n,x;
    cin>>n>>x;
    ll ans=0;
    while(n)
    {
        ans++,n/=x;
    }
    cout<<ans<<endl;




    return 0;
}

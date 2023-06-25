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
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ans+=x;
    }
    if(ans%5==0)
        cout<<ans/5<<endl;
    else
        cout<<(ans/5)+1<<endl;

    return 0;
}

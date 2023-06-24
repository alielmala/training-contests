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
    ll floor[n];
    for(int i=0;i<n;i++)
    {
        cin>>floor[i];
    }
    ll foot[n];
    for(int i=0;i<n;i++)
    {
        cin>>foot[i];
    }
    ll chain[n];
    for(int i=0;i<n;i++)
    {
        cin>>chain[i];
    }
    ld d1=0;
    ld d2=0;
    ll x=0;
    ll y=0;
    for(int i=0;i<n;i++)
    {
        x+=((floor[i]-foot[i])*(floor[i]-foot[i]));
        y+=((chain[i]-floor[i])*(chain[i]-floor[i]));

    }
    d1=sqrt(x);
    d2=sqrt(y);
    if(d1<=d2)
        cout<<"Yan";
    else
        cout<<"MaratonIME";
    return 0;
}

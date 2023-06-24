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
    ld x[n],y[n],r[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
        cin>>r[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ld dis1=sqrt(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])));
            ld dis2=r[i]+r[j];
            if(dis2>=dis1)
                cout<<i+1<<' '<<j+1<<endl;
        }
    }


    return 0;
}

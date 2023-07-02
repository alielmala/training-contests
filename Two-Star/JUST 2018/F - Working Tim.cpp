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
        int n,k;
        cin>>n>>k;
        ll ans=0;
        ll ans2=0;
        for(int i=0;i<n;i++)
        {
            string a,b;
            cin>>a>>b;
            int x=0,y=0,m1=0,m2=0;
            x=a[1]-'0';
            x+=(a[0]-'0')*10;
            y=b[1]-'0';
            y+=(b[0]-'0')*10;
            m1=a[4]-'0';
            m1+=(a[3]-'0')*10;
            m2=b[4]-'0';
            m2+=(b[3]-'0')*10;
            ll sum=(y-x+24)%24;
            ans+=sum;
            ll sum2=(m2-m1);
            ans2+=sum2;
        }
        if(ans2<0)
        {
            ans+=(ans2/60);
            ans2=abs(ans2)%60;
            if(abs(ans2)>0)
                ans--;
        }
        else
            ans+=(ans2/60);
    if(ans>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }





    return 0;
}

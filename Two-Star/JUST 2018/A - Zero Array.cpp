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
        ll n,q;
        cin>>n>>q;
        int arr[n+1];
        map<int,int>mp;
        int c=0;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
            if(mp[arr[i]]==1&&arr[i]!=0)
                c++;
        }
        for(int i=0;i<q;i++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                int a,b;
                cin>>a>>b;
                mp[arr[a]]--;
                if(mp[arr[a]]==0&&arr[a]!=0)
                    c--;
                arr[a]=b;
                if(mp[b]==0&&b!=0)
                    c++;
                mp[b]++;
            }
            else
                cout<<c<<endl;
        }

    }





    return 0;
}

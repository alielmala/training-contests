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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll ans=0;
        for(int i=0;i<30;i++)
        {
            ll sum=0;
            for(int j=0;j<n;j++)
            {
                if(((arr[j]>>i)&1))
                    sum++;
                else if(sum>0)
                {
                    ans+=((sum*(sum+1)/2)*(1<<i));
                    sum=0;
                }
            }
            if(sum>0)
                {
                    ans+=((sum*(sum+1)/2)*(1<<i));
                    sum=0;
                }
                        //cout<<sum<<' '<<ans<<endl;
        }
        cout<<ans<<endl;
    }







    return 0;
}

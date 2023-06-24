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
    int n,k;
    cin>>n>>k;
    int arr[n],brr[n];
    int pre1[100001]={0};
    int pre2[100001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pre1[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
        pre2[brr[i]]++;
    }
    ll ans=0;
    for(int i=1;i<=k/2;i++)
    {
        ans+=((pre1[i]*pre1[k-i]));

    }
    ll ans2=0;
    for(int i=1;i<=k/2;i++)
    {
        ans2+=((pre2[i]*pre2[k-i]));
    }
    //cout<<ans<<' '<<ans2<<endl;
    if(ans>ans2)
        cout<<"Mahmoud"<<endl;
    else if(ans<ans2)
        cout<<"BASHAR"<<endl;
    else
        cout<<"Draw"<<endl;
    return 0;
}

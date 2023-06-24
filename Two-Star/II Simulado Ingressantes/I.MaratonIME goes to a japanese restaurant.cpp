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
    ll s;
    cin>>s;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll sum=0,j=0,c=0,c2=0;
    while(j<n&&sum+arr[j]<s)
        sum+=arr[j++],c++;
    ll sum2=0,k=n-1;
    while(k>=0&&sum2+arr[k]<s)
        sum2+=arr[k--],c2++;
    if(c>c2)
        cout<<"Yan";
    else if(c<c2)
        cout<<"Nathan";
    else
        cout<<"Empate";
    return 0;
}

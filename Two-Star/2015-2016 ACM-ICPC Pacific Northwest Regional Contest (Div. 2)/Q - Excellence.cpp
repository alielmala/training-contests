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
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=100000000;
    for(int i=0;i<n/2;i++)
    {
        ans=min(ans,arr[i]+arr[n-i-1]);
    }
    cout<<ans;
    return 0;
}

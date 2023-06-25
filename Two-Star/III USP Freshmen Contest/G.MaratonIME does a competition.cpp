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
    ll a=0,b=0,c=0,d=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i%4==0)
            a+=arr[i];
        else if(i%4==1)
            b+=arr[i];
        else if(i%4==2)
            c+=arr[i];
        else
            d+=arr[i];
    }
    ll ans=max(a,b);
    ans=max(ans,c);
    ans=max(ans,d);
    if(a==ans)
        cout<<'A'<<endl;
    else if(b==ans)
        cout<<'B'<<endl;
    else if(c==ans)
        cout<<'C'<<endl;
    else
        cout<<'D'<<endl;


    return 0;
}

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
    vector<pair<int,string> > arr;
    for(int i=0;i<n;i++)
    {
        int a;
        string b;
        cin>>a>>b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end());
    bool f=0;
    int low=1,h=1,ind=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i].second=="SAFE")
        {
            low=arr[i].first;
        }
        else
        {
            if(!f)
                ind=arr[i].first;
            h=arr[i].first-1,f=1;
            break;
        }
    }
    if(f)
        {

            h=ind-1;
            //cout<<'f';
        }
    else
        h=k-1;

    cout<<min(low+1,k)<<' '<<min(h,k-1);







    return 0;
}

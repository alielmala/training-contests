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
    vector<pair<string,string> > f;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        f.push_back({b,a});
    }
    sort(f.begin(),f.end());
    for(int i=0;i<n;i++)
    {
        cout<<f[i].second<<' '<<f[i].first<<endl;
    }






    return 0;
}

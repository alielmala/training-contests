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
        ll a,b;
        cin>>a>>b;
        ll ans1=(a+b)/2;
        ll ans2=(a+b)-ans1;
        if((a==ans1&&b==ans2)||(b==ans1&&a==ans2))
            cout<<"Ok"<<endl;
        else
            cout<<ans1<<' '<<ans2<<endl;
    }


    return 0;
}

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
const ld pi=3.14159265359;
int main()
{
    FAST();

    ld n,s;
    cin>>n>>s;
    ld c=n*s;
    ld r= (s / 2.0) / sin(pi / n);
    //cout<<r<<endl;
    ld ans=pi*r*r;
    cout<<fixed<<setprecision(7)<<ans<<endl;




    return 0;
}

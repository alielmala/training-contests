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
    vector<pair<pair<ll,ll>,ll> >v;
    for(int xx=0;xx<n;xx++)
    {
        char c;
        cin>>c;
        if(c=='A')
        {
            ll x,y,r;
            cin>>x>>y>>r;
            if(x<0||x>1000||y<0||y>1000)
            {
                cout<<"No"<<endl;
            }
            else if(v.size()==0)
            {
                v.push_back({{x,y},r});
                cout<<"Ok"<<endl;
            }
            else
            {
                bool flag=0;
                for(int l=0;l<v.size();l++)
                {
                    if(v[l].first.first>=0&&v[l].first.second>=0&&v[l].second>0)
                    {
                        ll dis=abs(((x-v[l].first.first)*(x-v[l].first.first))+((y-v[l].first.second)*(y-v[l].first.second)));
                        ll rr=abs((r+v[l].second)*(r+v[l].second));
                        //cout<<dis<<' '<<rr<<endl;
                        if(dis<rr)
                            {
                                cout<<"No"<<endl;
                                flag=1;
                                break;
                            }
                        else if(l==v.size()-1)
                            {
                                v.push_back({{x,y},r});
                                flag=1;
                                cout<<"Ok"<<endl;
                                break;
                            }
                    }

                }
                if(!flag)
                {
                    v.push_back({{x,y},r});
                    cout<<"Ok"<<endl;
                }

            }
        }
        else if(c=='R')
        {
            ll x,y,r;
            cin>>x>>y>>r;
            bool flag=1;
            for(int qq=0;qq<v.size();qq++)
            {
               // cout<<'f';
                if(x==v[qq].first.first&&y==v[qq].first.second&&v[qq].second==r)
                {
                    cout<<"Ok"<<endl;
                    flag=0;
                    v[qq].first.first=-1;
                    v[qq].first.second=-1;
                    v[qq].second=-1;
                    break;
                }
                else if(qq==v.size()-1)
                {
                    cout<<"No"<<endl;
                    flag=0;
                    break;
                }
            }
            if(flag)
                cout<<"No"<<endl;
        }
       // for(int i=0;i<v.size();i++)
       // {
        //    cout<<v[i].first.first<<' '<<v[i].first.second<<' '<<v[i].second<<endl;
       // }
    }
    return 0;
}
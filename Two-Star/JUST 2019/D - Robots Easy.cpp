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
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        map<pair<int,int>,int>mp;
        mp[{9,2}]=1;
        mp[{9,3}]=1;
        mp[{10,2}]=1;
        mp[{7,6}]=1;
        mp[{7,7}]=1;
        mp[{6,6}]=1;
        mp[{6,7}]=1;
        mp[{9,10}]=1;
        mp[{9,11}]=1;
        mp[{10,11}]=1;
        mp[{10,3}]=2;
        mp[{10,10}]=2;
        mp[{3,10}]=2;
        mp[{3,3}]=2;
        vector<char>ans;
        bool flag=0;
        while(x>3)
        {
            if(mp[{x,y}]==2)
                {
                    flag=1;
                    break;
                }
            else if(mp[{x-1,y}]==0)
                ans.push_back('U'),x--;
            else if(mp[{x-1,y}]==2)
                {
                    ans.push_back('U');
                    x--;
                    flag=1;
                    break;
                }
            else if(mp[{x-1,y}]==1)
                ans.push_back('R'),y++;
        }
        if(x<3&&!flag)
        {
            while(x<3)
            {
                if(mp[{x,y}]==2)
                {
                    flag=1;
                    break;
                }
                ans.push_back('D');
                x++;
            }
        }
        if(x==3&&y==3)
        {
            flag=1;
        }
        if(!flag)
        {
            while(y<3)
            {
                if(mp[{x,y}]==2)
                {
                    flag=1;
                    break;
                }
                ans.push_back('R');
                y++;
            }
            while(y>3)
            {
                if(mp[{x,y}]==2)
                {
                    flag=1;
                    break;
                }
                ans.push_back('L');
                y--;
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
        cout<<endl;


    }


    return 0;
}

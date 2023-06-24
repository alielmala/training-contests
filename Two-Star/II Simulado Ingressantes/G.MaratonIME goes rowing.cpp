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
   // int t;
    //cin>>t;
   // while(t--)
    //{
        string f;
        cin>>f;
        stack<char>st;
        for(int i=0;i<f.size();i++)
        {
            if(st.empty())
                st.push(f[i]);
            else if(f[i]=='B'&&st.top()=='A')
                st.pop();
            else
                st.push(f[i]);
        }
        if(st.empty())
            cout<<"Sim";
        else
            cout<<"Nao";

    //}

    return 0;
}

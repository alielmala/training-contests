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
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]==-1&&arr[i-1]>=0)
            {
                arr[i]=(arr[i-1]+1)%m;
            }

        }
        for(int i=n-1;i>0;i--)
        {
            if(arr[i]>=0&&arr[i-1]==-1)
            {
                if(arr[i]-1<0)
                {
                    arr[i-1]=arr[i]-1+m;
                }
                else
                {
                    arr[i-1]=arr[i]-1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<endl;


    }







    return 0;
}

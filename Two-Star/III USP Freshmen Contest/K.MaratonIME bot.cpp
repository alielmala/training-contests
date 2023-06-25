#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
#define isON(n,k)(((n)>>(k)) & 1)

void FAST()
{
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
    FAST();
    string str; getline(cin,str);
    ll n= str.size();
    string test1 =" Sussu.",test2=" Sussu!",test3=" Sussu ",test4= "Sussu ";
    vector<std::string> words;
    istringstream iss(str);
    string word;

    while (iss >> word) {
        words.push_back(word);
    }
    if(str[n-1]=='?')
        cout<<7<<endl;
    else {
        int f=0;
        for(int i=0;i<words.size();++i){
            if(words[i]=="Sussu"||words[i]=="Sussu."||words[i]=="Sussu!")
                f=1;
        }
        if(f)
            cout<<"AI SUSSU!"<<endl;
        else
            cout<<"O cara é bom!"<<endl;
    }
}

int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
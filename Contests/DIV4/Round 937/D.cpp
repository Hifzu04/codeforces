#include <bits/stdc++.h>
using namespace std;
 
#define ll     long long
#define ff     first
#define ss     second
#define pb     push_back
 
int main()
{
    int test;
    cin>>test;
 
    vector<int> bin;
    string s;
 
    for(int i=2; i<=100000; i++)
    {
        s = to_string(i);
 
        if(*max_element(s.begin(), s.end()) <= '1')
            bin.pb(i);
    }
 
    vector<int> poss(100005);
    poss[1] = 1;
 
    for(int i=1; i<=100000; i++)
    {
        if(poss[i])
        {
            for(auto e: bin)
            {
                if(e*i > 100000)        break;
 
                poss[e*i] = 1;
            }
        }
    }
 
    while(test--){
        int n;
        cin>>n;
 
        if(poss[n])
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
 
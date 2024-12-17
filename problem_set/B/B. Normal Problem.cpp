#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        string ans = "";
        for(int i = str.size()-1 ; i>=0 ; i--){
            if(str[i]=='w'){
                ans+='w';
            }
            else if(str[i] =='p'){
                ans+='q';

            }
            else{
                ans+='p';
            }
        }
        cout<<ans<<"\n";
    }


    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin>>str;


                if (str[0] != str[n-1]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


        
    

    
        
        // if(str.size()>2 && str[0] != str[n]){
        //        cout<<"Yes"<<"\n";
        // }else  cout<<"NO"<<"\n";
    }

    return 0;
}
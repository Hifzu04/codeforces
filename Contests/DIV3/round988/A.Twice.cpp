    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t; 
        cin>>t;
        while(t--){
            int a ; cin>>a;
            int arr[a];
            for(int i = 0 ; i<a; i++){
                cin>>arr[i];
            }
            sort(arr,arr+a);
            int count = 0 ; 

            for(int i = 0 ; i< a-1 ; i++){
                if(arr[i]==arr[i+1]){
                    count++;
                    i++;
                }
            }
            cout<<count<<"\n";
        }


        return 0;
    }
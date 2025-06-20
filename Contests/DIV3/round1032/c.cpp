#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        int M0 = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                M0 = max(M0, a[i][j]);
            }
        }

        vector<vector<int>> row_cols(n), col_rows(m);
        vector<int> col_cnt(m, 0), row_cnt(n, 0);
        int distinctCols = 0, distinctRows = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == M0){
                    row_cols[i].push_back(j);
                    col_rows[j].push_back(i);
                    if(col_cnt[j]++ == 0) distinctCols++;
                    if(row_cnt[i]++ == 0) distinctRows++;
                }
            }
        }

        bool canReduce = false;

    
        for(int r = 0; r < n && !canReduce; r++){
            if(row_cnt[r] == 0) continue;
            
            int singleInRow = 0;
            for(int j: row_cols[r]){
                if(col_cnt[j] == 1) 
                    singleInRow++;
            }
    
            if(distinctCols - singleInRow <= 1){
                canReduce = true;
                break;
            }
        }

        
        for(int c = 0; c < m && !canReduce; c++){
            if(col_cnt[c] == 0) continue;
            int singleInCol = 0;
            for(int i: col_rows[c]){
                if(row_cnt[i] == 1)
                    singleInCol++;
            }
            if(distinctRows - singleInCol <= 1){
                canReduce = true;
                break;
            }
        }

        cout << (canReduce ? M0 - 1 : M0) << "\n";
    }
    return 0;
}

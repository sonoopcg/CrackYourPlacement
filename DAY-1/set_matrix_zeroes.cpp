#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<bool> rows(m,0);
        vector<bool>cols(n,0);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                     rows[i] = true;
                    cols[j] = true;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rows[i] || cols[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
        cout<<"[";
         for(int i=0; i<m; i++){
            cout<<"[";
            for(int j=0; j<n; j++){
                cout<<matrix[i][j];
                 if(j==n-1){
                cout<<"";
            }
            else{
                cout<<",";
            }
            }
            if(i==m-1){
                cout<<"]";
            }
            else{
                cout<<"] ,";
            }
        }
        cout<<"]";
    }
};
int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{
        1,1,1}};
        s.setZeroes(matrix);
        return 0;
        
}
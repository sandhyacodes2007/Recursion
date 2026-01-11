#include<bits/stdc++.h>
using namespace std;
bool placementispossible(vector<string>& ans,int n, int row, int col){
     for (int i = 0; i < row; i++) {
        if (ans[i][col] == 'Q') return false;
    }

    // Check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (ans[i][j] == 'Q') return false;
    }

    // Check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (ans[i][j] == 'Q') return false;
    
    }
    return true;
}
void func(int row,int n, vector<vector<string>>& res, vector<string>& ans){
    if(row==n){
        res.push_back(ans);
        return;

    }
    for(int col=0; col<n; col++){
        if(placementispossible(ans, n,row, col)){
ans[row][col]='Q';
func(row+1,n, res, ans);
ans[row][col]='.';//backtracking
        }
    }

}
vector<vector<string>> solveNQueen(int n){
    vector<vector<string>> res;
    vector<string> ans(n, string(n,'.')); //initialize board
    


    
    func(0, n,res, ans);
    return res;

}
int main(){
    int n; 
    cin>>n;
    vector<vector<string>> sol= solveNQueen(n);
    for(auto& it: sol){
        for(string& part: it){
            cout<<part<<endl;
        }
        cout<<endl;
    }
    return 0;
}
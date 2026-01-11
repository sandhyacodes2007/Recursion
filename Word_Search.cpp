#include<bits/stdc++.h>
using namespace std;
bool func(int ind, int i, int j, vector<vector<char>>& board, string& word, vector<vector<bool>>& visited){
    if(ind==word.size()){
        return true;
    }
    int n= board.size();
    int m= board[0].size();
    if(i<0||j<0||i>=n ||j>=m)return false;
    if(visited[i][j] ||board[i][j]!= word[ind]){
        return false;
    }
        visited[i][j]= true;

        bool ans=
       func(ind+1, i-1, j ,board, word, visited)||
       func(ind+1, i+1, j , board, word, visited)||
       func(ind+1, i, j-1 , board, word, visited)||
        func(ind+1, i, j+1 , board, word, visited);
visited[i][j]= false;
        return ans;
    

}
bool wordsearch(vector<vector<char>>& board, string& word){
    int n= board.size();
    int m= board[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(word[0]==board[i][j]){
            if(func(0, i, j, board, word, visited))
            return true;
        }
    }
}
return false;
}
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<char>> board(n, vector<char>(m));
    //input grid
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        cin>>board[i][j];
        
    
    string word;
    cin>>word;
    if(wordsearch(board, word)){
        cout<<"True"<<endl;
    }
    else cout<<"False"<<endl;
    return 0;
}
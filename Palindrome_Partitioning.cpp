#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string& s, int left, int right){
    while(left<right){
    if(s[left]!=s[right])
        return false;
left++ ;
right--;
    }
    return true;
    
}
void partitionhelper(int ind, string& s, vector<string>& ans, vector<vector<string>>& res){
  int n= s.size();
   if(ind==n){
    res.push_back(ans);
    return;
   }
   for(int j= ind; j<n; j++){
    if(ispalindrome(s, ind, j)){
        string substring= s.substr(ind, j-ind+1);
        ans.push_back(substring);
        
        partitionhelper(j+1, s,  ans, res);
        ans.pop_back();
    }
    }
   }
   vector<vector<string>> partitionstring(string s){
    vector<vector<string>> res;
    vector<string> ans;
    partitionhelper(0,s,ans, res);
    return res;
   }
int main(){
    string s;
    cin>>s;
    vector<vector<string>> sol= partitionstring(s);
    for(const auto& it: sol){
        for(const auto& part :it){
            cout<<part<<" ";
        
        }
        cout<<endl;
    }
    return 0;
}
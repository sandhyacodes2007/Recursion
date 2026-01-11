#include<bits/stdc++.h>
using namespace std;
void func(int ind, int k, int n, vector<int>& ans, vector<vector<int>>& res ){
    if(ans.size()==k&& n==0){
        res.push_back(ans);
        return;
    }
    if(ans.size()>k ||n<0 )return;

        for(int i=ind; i<=9; i++){
ans.push_back(i);
        func(i+1, k, n-i, ans, res);
        ans.pop_back();
      

       

        }
}
vector<vector<int>> combinationsum3(int k , int n){
    vector<vector<int>> res;
    vector<int> ans;
    func(1,k,n, ans, res);
    return res;
}
int main(){
    int k, n;
    cin>>k>>n;
    vector<vector<int>> result= combinationsum3(k,n);
    for(auto& it: result){
        cout<<"{";
        for(int num: it){
            cout<<num<<" ";
        }
        cout<<"}";
    }
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
void func(int ind, int sum, vector<int>& candidates, vector<int> &ans, vector<vector<int>>& res){
    int n= candidates.size();
    
    if(sum==0){
        res.push_back(ans);
        return;
    }
    if(sum<0|| ind==n)
        return;
    
    
    ans.push_back(candidates[ind]);
  func(ind+1, sum- candidates[ind],candidates, ans, res);

    ans.pop_back();

for(int j=ind+1; j<n; j++){
    if(candidates[j]!= candidates[ind]){
    func(j, sum,candidates, ans, res);
    break;
}
}
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
 
    vector<vector<int>> res;
    vector<int> ans;
       sort(candidates.begin(), candidates.end());
    func(0,  target, candidates, ans, res);
    return res;
}
int main(){
    int n, target;
    cin>>n>>target;
    vector<int> candidates(n);
    for(int i=0;i<n; i++){
        cin>>candidates[i];
    }
    vector<vector<int>> key= combinationSum2(candidates, target);
    for( const auto& it:key ){
         cout<<"{";
        for(int i=0; i<it.size(); i++){
            cout<< it[i];
            if(i<it.size()-1){
                cout<<",";
            }
        }
        cout<<"}"<<endl;
    
    }
    return 0;

    }

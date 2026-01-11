#include<bits/stdc++.h>
using namespace std;
void func(int ind, vector<int>& nums, vector<int>& ans, vector<vector<int>>& res){
    int n= nums.size();
    if(ind==n){
        res.push_back(ans);
        return;
    }
    ans.push_back(nums[ind]);
    func(ind+1, nums, ans, res);
    ans.pop_back();

    for(int j=ind+1; j<=n; j++){
        if(nums[j]!= nums[ind]);
        func(j, nums, ans, res);
        return;
    }
    
}
vector<vector<int>> subset2(vector<int>& nums){
    vector<vector<int>> res;
    vector<int> ans;
    sort(nums.begin(), nums.end());
    func(0, nums, ans, res);
    return res;
}
int main(){
    int n; 
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    vector<vector<int>> key= subset2(nums);
    for(const auto& it: key){
        cout<<"[";
        for(int num: it){
            cout<<num<<" ";
            }
        
            cout<<"]";
        }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void func(int ind, vector<int>& nums, vector<int>& ans, vector<vector<int>>& arr){
    int n= nums.size();
    if(ind==n){
        arr.push_back(ans);
        return;
    }
    func(ind+1, nums, ans, arr) ;
    ans.push_back(nums[ind]);

func(ind+1, nums, ans, arr);
    ans.pop_back();
}

vector<vector<int>> powerset(vector<int>& nums){
    vector<vector<int>>arr;
    vector<int> ans;
    func(0, nums, ans, arr);
    return arr;

}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    vector<vector<int>>ans=  powerset( nums);
    //print the subset
    for(const auto& subset: ans){
    cout<<"{";
        for(int i=0; i<subset.size(); i++){
            cout<<subset[i];
            if(i<subset.size()-1){
                cout<<",";
            }
        }
        cout<<"}"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void func( int ind,  int sum, vector<int>& nums, vector<int>& ans){
   int  n= nums.size();
  
if(ind==n)
{
    ans.push_back(sum);
    return;
}
 func(ind+1, sum+nums[ind], nums, ans);
 func(ind+1, sum,nums, ans  );
 
}
vector<int> subset1(vector<int>& nums){
    vector<int> ans;
    func(0, 0, nums, ans);
    return ans;
}int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    vector<int> res= subset1(nums);
    
    for(  int it: res){
     cout<<it<<endl;
    }
    return 0;
}

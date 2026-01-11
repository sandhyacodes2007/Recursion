#include<bits/stdc++.h>
using namespace std;
string func(int ind,int sum, int k, vector<int>& nums ){
if(sum==k)return "YES";
    if(ind<0)return "NO";
    string take= func(ind-1, sum+nums[ind], k,nums);
    if(take=="YES")return "YES";
string nottake=func(ind-1, sum, k, nums);
return nottake;
   
}
bool subsequence_with_sum_K(vector<int>& nums, int k){
int n= nums.size();
return func(n-1, 0, k,  nums)=="YES";

}

int main(){
    int n, k;
    cin>>n>>k;
vector<int>nums(n);
for(int i=0; i<n; i++){
    cin>>nums[i];

}
bool ans= subsequence_with_sum_K(nums, k);
cout<<(ans ? "YES":"NO")<<endl;
return 0;
}
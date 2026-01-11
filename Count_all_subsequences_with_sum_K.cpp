#include<bits/stdc++.h>
using namespace std;
int func(int ind, int k, vector<int>& nums){
    if(ind==nums.size()){
    if(k==0){
        return 1;
    }
    else{
        return 0;
    }
}
        int path1= func(ind+1, k-nums[ind], nums);
        int path2= func(ind+1, k, nums);
        return path1+path2;

    
}
int countallsubsequencewithsumK(int k, vector<int>& nums){
  
   return func(0, k, nums);
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int ans= countallsubsequencewithsumK(k, nums);
    cout<<ans<<endl;
    return 0;
}
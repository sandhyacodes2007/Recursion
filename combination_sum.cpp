#include<bits/stdc++.h>
using namespace std;
void func(int ind, int target, vector<vector<int>>& res, vector<int>& ans, vector<int>& candid){
    int n= candid.size();
   
        if(target==0){
            res.push_back(ans);
            return;
        }
        

        if(ind<0)return;
        if(target<0)return;

    
        func(ind-1, target, res, ans, candid);
        
        ans.push_back(candid[ind]);
         func(ind, target-candid[ind], res, ans,candid );
         ans.pop_back();


    }
    vector<vector<int>> combination_sum(vector<int>& candid, int target){
        vector<vector<int>> res;
        vector<int> ans;
        func(candid.size()-1, target, res, ans, candid );
        return res;

    }
    int main(){
        int n, target;
        cin>>n>>target;
        vector<int> candid(n);
        for(int i=0; i<n; i++){
            cin>>candid[i];
        }
        vector<vector<int>> answ= combination_sum(candid, target);
        for(auto it: answ){
            for(int num: it){
                cout<<"{"<<num<<"}"<<endl;
            }
        }
        return 0;
    }

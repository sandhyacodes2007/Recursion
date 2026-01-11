#include<bits/stdc++.h>
using namespace std;
 void func(int ind,string digits, string str,vector<string>&ans, string combos[]  ){
if(ind==digits.size()){
    ans.push_back(str);
    return;
}
int num= digits[ind]-'0';
for(int i=0; i<combos[num].size(); i++){
    func(ind+1, digits, str+combos[num][i], ans, combos);
}
    }

    vector<string> letterCombinations(string digits) {
       
    string combos[]= {" ", " ",   "abc", "def", "ghi","jkl","mno", "pqrs", "tuv","wxyz"};
    int n= digits.size();
    vector<string> ans;
    string str="";
    func(0, digits, "", ans, combos);
    return ans;
    
    }


    int main(){
        
        string digits;
        cin>>digits;
        vector<string> res= letterCombinations(digits);
        for(auto &it: res){
            cout<<it<<endl;
            

        }
    }
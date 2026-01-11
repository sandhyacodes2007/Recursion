#include<bits/stdc++.h>
using namespace std;
int powofanumber(int x, int n){
    if(n=0)return 1;
    if(n==1)return x;
    if(n%2!=0)
    return x*pow(x,n-1);
    else
    return pow(x*x,n/2);
    }

int main(){
     int x,n;
     cin>>x>>n;
     
    return 0;
}
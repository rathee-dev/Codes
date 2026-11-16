#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double knap01Memo(vector<vector<int>> & items, int W, int n, vector <vector<int>>& dp){
    if(n==0|| W==0) return 0;
    if(dp[n][W]!=-1){
        return dp[n][W];
    }
    int val=items[n-1][0];
    int wt =items[n-1][1];

    if(wt<=W){
        int include = val + knap01Memo(items,W-wt,n-1,dp);
        int exclude = knap01Memo(items, W, n-1,dp);
        dp[n][W] = max(include,exclude);

    }
    else{
        dp[n][W] = knap01Memo(items,W,n-1,dp);
    }
    return dp[n][W];
}
int main(){
    vector<vector<int>> items{
        {20,2}, {30,3},{50,4},{60,5},{100,9}
    };
    int W=10;
    int n=items.size();
    vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
    cout<<knap01Memo(items,W,n,dp)<<endl;
    return 0;
}
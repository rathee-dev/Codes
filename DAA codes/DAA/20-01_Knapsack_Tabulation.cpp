#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double knap01Tab(vector<vector<int>> & items, int W, int n){
    vector<vector<int>> dp(n+1, vector<int>(W+1,0));
    for(int i=1;i<=n;i++){
        int val=items[i-1][0];
        int wt=items[i-1][1];
        for(int j=1;j<=W;j++){
            if(wt<=j){
                int include = val + dp[i-1][j-wt];
                int exclude = dp[i-1][j];

                dp[i][j]=max(include,exclude);
            }
        }
    }
return dp[n][W];
}
int main(){
    vector<vector<int>> items{
        {20,2}, {30,3},{50,4},{60,5},{100,9}
    };
    int W=10;
    int n=items.size();
    cout<<knap01Tab(items,W,n)<<endl;
    return 0;
}
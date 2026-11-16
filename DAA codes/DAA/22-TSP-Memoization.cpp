#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int tsp(int city, int mask, vector<vector<int>>& cost, 
vector<vector<int>>& dp, int n)
{
    if(mask==(1<<n)-1)
        return cost[city][0];
    
    if(dp[city][mask]!=-1)
        return dp[city][mask];
        
    int ans=INT_MAX;
    
    for(int i=0; i<n; i++)
    {
        if((mask & (1<<i))==0)
        {
            int newCost=cost[city][i] + tsp(i, mask |(1<<i), 
            cost, dp, n);
            
            ans=min(ans, newCost);
        }
    }
    
    return dp[city][mask]=ans;
}

int main()
{
    int n;
    cout<<"Enter no of cities: ";
    cin>>n;
    
    vector<vector<int>> cost(n, vector<int> (n));
    
    cout<<"Enter cost matrix: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>cost[i][j];
        }
    }
    
    vector<vector<int>> dp(n, vector<int> (1<<n, -1));
    
    int ans=tsp(0, 1, cost, dp, n);
    
    cout<<"Min optiomal cost: "<<ans;
    
    return 0;
}

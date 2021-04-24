class Solution {
public:
    int dp[1000];
    
    int help(int c,vector<int> arr)
    {
        if(c>=arr.size())
            return 0;
        if(dp[c]!=-1)
            return dp[c];
        int dp1=help(c+1,arr);
        int dp2=help(c+2,arr);
            return dp[c]=min(dp1,dp2)+arr[c];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1, sizeof(dp));
        return min(help(0,cost),help(1,cost));
    }
};

/*******
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.

 

Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: Cheapest is: start on cost[1], pay that cost, and go to the top.
Example 2:

Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: Cheapest is: start on cost[0], and only step on 1s, skipping cost[3].
 

Constraints:

2 <= cost.length <= 1000
0 <= cost[i] <= 999
*******/

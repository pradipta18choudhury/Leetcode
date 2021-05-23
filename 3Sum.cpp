/******
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
Example 3:

Input: nums = [0]
Output: []
 

Constraints:

0 <= nums.length <= 3000
-105 <= nums[i] <= 105
******/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> res;
        int j,k;
        for(int i=0;i<n-2;i++)
        {
            int sum=-nums[i];
            j=i+1;
            k=n-1;
            while(j<k)
            {
                int temp=nums[j]+nums[k];
                if(temp==sum)
                {
                    vector<int> v{nums[i],nums[j],nums[k]};
                    sort(v.begin(),v.end());
                    res.insert(v);
                    j++;
                    k--;
                }
                else if(temp>sum)
                    k--;
                else
                    j++;
            }
        }
        vector<vector<int>> ans;
        ans.insert(ans.begin(),res.begin(),res.end());
        
        return ans;
    }
};

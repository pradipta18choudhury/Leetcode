/******
Given an array nums of n integers where nums[i] is in the range [1, n], 
return an array of all the integers in the range [1, n] that do not appear in nums.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
 

Follow up: Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.
*****/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums){
        int n=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
        int m=nums.size();
        int i,j=0;
        for(i=0;i<n;i++){
            if(nums[j]==i+1){
                j++;
            }
            else{
                nums.push_back(i+1);
            }
        }
        nums.erase(nums.begin(),nums.begin()+m);
        return nums;
    }
};

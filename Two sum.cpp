class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> my_map;
        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
            if(my_map.count(diff))
                return{my_map[diff],i};
            my_map[nums[i]]=i;
        }
        return {};
    }
};

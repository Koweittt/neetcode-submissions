class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++)
        {
            int search = target - nums[i];
            if (seen.count(search))
                return {seen[search], i};
            seen[nums[i]] = i;
        }
        return {0, 0};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::vector<int> ans;
        std::unordered_set<int> impossible;
        int search = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (impossible.find(nums[i]) != impossible.end())
                continue;
            search = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] != search)
                    continue;
                else
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return (ans);
                }
            }
            impossible.insert(nums[i]);
        }
        return (ans);
    }
};

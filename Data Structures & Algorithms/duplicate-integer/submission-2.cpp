class Solution {
public:
    bool hasDuplicate(vector<int>& nums)
    {
        std::map<int, int> numbers;
        for (int i = 0; i < nums.size(); i++)
        {
            numbers[nums[i]]++;
            if (numbers[nums[i]] > 1)
                return (true);
        }
        return (false);
    }
};
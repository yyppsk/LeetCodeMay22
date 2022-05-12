class Solution
{
public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        sort(begin(nums), end(nums));
        vector<vector<int>> ans;
        function<void(const int &)> backtracking = [&](const int &start)
        {
            if (start >= nums.size())
            {
                ans.push_back(nums);
                return;
            }
            for (int i = start; i < nums.size(); ++i)
            {
                int j = i - 1;
                while (j >= start && nums[j] != nums[i])
                    --j;
                if (j != start - 1)
                    continue;
                swap(nums[i], nums[start]);
                backtracking(start + 1);
                swap(nums[i], nums[start]);
            }
        };
        backtracking(0);
        return ans;
    }
};
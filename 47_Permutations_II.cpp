#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
set<vector<int>> distinct;
void helper(vector<vector<int>> &solution, int index, vector<int> &nums)
{
    if (index >= nums.size() && distinct.find(nums) == distinct.end())
    {
        solution.push_back(nums);
        distinct.insert(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        helper(solution, index + 1, nums);
        swap(nums[index], nums[i]);
    }
}
vector<vector<int>> permuteUnique(vector<int> &nums)
{
    vector<vector<int>> solution;
    int index = 0;
    helper(solution, index, nums);
    return solution;
}
using namespace std;
int main()
{
    vector<int> num = {1, 1, 2};
    permuteUnique(num);
    return 0;
}
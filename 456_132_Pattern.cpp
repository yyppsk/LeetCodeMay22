#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
/*
Time complexity : O(n)O(n). We travesre over the numsnums array of size nn once to fill the minmin array.
After this, we traverse over numsnums to find the nums[k]nums[k].
Atmost nn elements can be put in and out of the numsnums array in total.
Thus, the second traversal requires only O(n)O(n) time.

Space complexity : O(n)O(n). minmin array of size nn is used.
*/
bool find132pattern(vector<int> &nums)
{
    int size = nums.size();
    vector<int> min_ele(size);
    min_ele[0] = nums[0];
    for (int i = 1; i < size; i++)
    {
        min_ele[i] = min(nums[i], min_ele[i - 1]);
    }
    stack<int> stacker;
    for (int j = size - 1; j >= 0; j--)
    {
        while (!stacker.empty() && stacker.top() <= min_ele[j])
            stacker.pop();
        if (!stacker.empty() && stacker.top() < nums[j])
        {
            return true;
        }
        stacker.push(nums[j]);
    }
    return false;
}
int main()
{
    vector<int> num = {3, 1, 4, 2};
    cout << find132pattern(num);
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> subsetss;
void generate(vector<int> &subset, int i, int k, int n)
{
    if (k == subset.size() && n == 0)
    {
        subsetss.push_back(subset);
        return;
    }
    if (i >= 10 || (n != 0 && i > n))
        return;
    generate(subset, i + 1, k, n);
    subset.push_back(i);
    generate(subset, i + 1, k, n - i);
    subset.pop_back();
}
vector<vector<int>> combinationSum3(int k, int n)
{
    if (n > 45)
    {
        return subsetss;
    }
    if (k == 1 && n > 9 && n < 1)
    {
        subsetss.push_back({});
        return subsetss;
    }
    if (k == 2 && n > 17 && n < 3)
    {
        subsetss.push_back({});
        return subsetss;
    }
    if (k == 3 && n > 24 && n < 6)
    {
        subsetss.push_back({});
        return subsetss;
    }
    if (k == 4 && n > 30 && n < 10)
    {
        subsetss.push_back({});
        return subsetss;
    }
    if (k == 5 && n > 35 && n < 15)
    {
        subsetss.push_back({});
        return subsetss;
    }
    if (k == 6 && n > 39 && n < 21)
    {
        subsetss.push_back({});
        return subsetss;
    }
    if (k == 7 && n > 42 && n < 28)
    {
        subsetss.push_back({});
        return subsetss;
    }
    if (k == 8 && n > 44 && n < 36)
    {
        subsetss.push_back({});
        return subsetss;
    }
    if (k == 9 && n > 45 && n < 45)
    {
        subsetss.push_back({});
        return subsetss;
    }
    vector<int> subset;
    generate(subset, 1, k, n);
    return subsetss;
}
int main()
{
    combinationSum3(3, 7);
    return 0;
}
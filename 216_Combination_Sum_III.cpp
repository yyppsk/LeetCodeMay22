#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> result;
vector<vector<int>> ansArr;
    int sum(vector<int>& combination){
        int ans = 0;
        for(auto x: combination){
            ans += x;
        }
        return ans;
    }
    
    void combinationSumHelper(int k, int n, vector<int>& combination, int num){
        
        if(k == 0){
            if(sum(combination) == n ){
                ansArr.push_back(combination);
            }
            return;
        }
        
        if(num > 9) return;
        
        combination.push_back(num);  // Including num in combination
        combinationSumHelper(k - 1, n, combination, num + 1);
        combination.pop_back(); // Not including num in combination
        combinationSumHelper(k, n, combination, num + 1);    
        
    }
vector<vector<int>> combinationSum3(int k, int n)
{
    if (n > 45)
    {
        result.push_back({});
        return result;
    }
    if (k == 1 && n > 9 || n < 1)
    {
        result.push_back({});
        return result;
    }
    if (k == 2 && n > 17 || n < 3)
    {
        result.push_back({});
        return result;
    }
    if (k == 3 && n > 24 || n < 6)
    {
        result.push_back({});
        return result;
    }
    if (k == 4 && n > 30 || n < 10)
    {
        result.push_back({});
        return result;
    }
    if (k == 5 && n > 35 || n < 15)
    {
        result.push_back({});
        return result;
    }
    if (k == 6 && n > 39 || n < 21)
    {
        result.push_back({});
        return result;
    }
    if (k == 7 && n > 42 || n < 28)
    {
        result.push_back({});
        return result;
    }
    if (k == 8 && n > 44 || n < 36)
    {
        result.push_back({});
        return result;
    }
    if (k == 9 && n > 45 || n < 45)
    {
        result.push_back({});
        return result;
    }
    if (k == 1 && n <= 9)
    {
        result.push_back({k});
        return result;
    }
    vector<int> combination;
        combinationSumHelper(k, n, combination, 1);
        return ansArr;
}
int main()
{
    combinationSum3(3, 7);
    return 0;
}
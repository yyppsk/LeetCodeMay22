#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int countVowelStrings(int n)
{
    vector<string> vowels = {"a", "e", "i", "o", "u"};
    vector<vector<int>> generator(n + 1, vector<int>(5, 0));
    if (n == 1)
        return 5;
    for (int j = 0; j < 5; j++)
    {
        generator[0][j] = 1;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < 5; j++)
            generator[i][j] = accumulate(generator[i - 1].begin(), generator[i - 1].begin() + j + 1, 0);
    return generator[n][4];
}
int main()
{
    cout << countVowelStrings(2);
    return 0;
}
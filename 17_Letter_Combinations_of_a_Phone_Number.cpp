#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <unordered_map>
using namespace std;
unordered_map<int, vector<char>> alphabets;
vector<int> ConvertedDigits;
vector<string> finalCombinations;
void combinations(int position, string currentWord)
{
    vector<char> letters = alphabets[ConvertedDigits[position]];
    for (auto ch : letters)
    {
        if (position == ConvertedDigits.size() - 1)
        {
            finalCombinations.push_back(currentWord + ch);
        }
        else
        {
            combinations(position + 1, currentWord + ch);
        }
    }
}
vector<string> letterCombinations(string digits)
{
    alphabets[2] = {'a', 'b', 'c'};
    alphabets[3] = {'d', 'e', 'f'};
    alphabets[4] = {'g', 'h', 'i'};
    alphabets[5] = {'j', 'k', 'l'};
    alphabets[6] = {'m', 'n', 'o'};
    alphabets[7] = {'p', 'q', 'r', 's'};
    alphabets[8] = {'t', 'u', 'v'};
    alphabets[9] = {'w', 'x', 'y', 'z'};
    if (digits.size()==0)
    {
        return {};
    }
    for (auto d : digits)
    {
        ConvertedDigits.push_back(d - '0');
    }
    combinations(0, "");
    return finalCombinations;
}
int main()
{
    letterCombinations("23");
    for (auto i : finalCombinations)
    {
        cout << i << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
// time optimized solution implemented with vector
string removeDuplicates(string s, int k)
{
    vector<pair<char, int>> vectCounter;
    for (int i = 0; i < s.size(); i++)
    {
        if (vectCounter.empty() || s[i] != vectCounter.back().first)
        {
            vectCounter.push_back({s[i], 1});
        }
        else if (++vectCounter.back().second == k)
        {
            vectCounter.pop_back();
        }
    }
    s = "";
    for (auto &x : vectCounter)
    {
        s = s + string(x.second, x.first);
    }
    return s;
}
int main()
{
    string s1 = "pbbcggttciiippooaais";
    removeDuplicates(s1, 2);
    return 0;
}
/*
//Memory optimized solution
char prev = s[0];
        int prev_i = 0;
        int counter = 1;
        int i = 1;
        while(true){
            if(s[i] == prev) counter++;
            else{
                prev = s[i];
                prev_i = i;
                counter = 1;
            }
            if(counter == k){
                s.erase(s.begin() + prev_i, s.begin()+i+1);
                i=prev_i-k;
                if(i < 0) i = 0;
            }
            else{
                i++;
                if(i >= s.size()) break;
            }
        }

        return s;

    }
*/
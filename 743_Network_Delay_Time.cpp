#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int networkDelayTime(vector<vector<int>> &times, int n, int k)
{
    vector<vector<pair<int, int>>> graph(n + 1);
    vector<int> signals(n + 1, INT_MAX);

    for (int i = 0; i < times.size(); i++)
    {
        int j = times[i][0];
        graph[j].push_back({times[i][1], times[i][2]});
    }
}
int main()
{
    return 0;
}
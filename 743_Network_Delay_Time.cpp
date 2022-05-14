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
    queue<int> q;
    q.push(k);
    signals[k] = 0; // first signal always takes zero to itself
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (pair<int, int> p : graph[curr])
        {
            int next = p.first;
            int time = p.second;
            int arrivalTime = signals[curr] + time;
            if (signals[next] > arrivalTime)
            {
                signals[next] = arrivalTime;
                q.push(next);
            }
        }
    }
    int maxTime = 0;
    for (int i = 1; i <= n; i++)
    {
        if (signals[i] == INT_MAX)
            return -1;
        maxTime = max(maxTime, signals[i]);
    }
    return maxTime;
}
int main()
{
    vector<vector<int>> T = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
    cout << networkDelayTime(T, 4, 2);
    return 0;
}
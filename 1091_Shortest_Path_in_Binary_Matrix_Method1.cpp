bool isValid(int r, int c, vector<vector<int>> &grid, int m, int n)
{
    if (r >= 0 && c >= 0 && r <= m && c <= n && grid[r][c] == 0)
    {
        return true;
    }
    return false;
}
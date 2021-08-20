#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int N, M, X;
int grid[21][21] = {0};
bool isSafe(int x, int y)
{

    if (x < 0 || x >= N || y < 0 || y >= M)
        return false;
    return true;
}

void PrintBoard(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        cout << " | ";
        for (int j = 0; j < m; j++)
        {

            if (grid[i][j] == -1)
                cout << "-   ";
            else
                cout << grid[i][j] << "   ";
            cout << " | ";
        }
        cout << endl;
        cout << "___________________________";
        cout << endl;
    }
}
int main()
{
    int T;
    cin >> T;
    vector<pair<int, int>> arr;
    while (T--)
    {
        cin >> N >> M;
        grid[0][0] = -1;
        grid[N - 1][0] = -1;
        grid[N - 1][M - 1] = -1;
        grid[0][M - 1] = -1;
        for (int i = 0; i < 9; i++)
        {
            int x, y;
            cin >> x >> y;
            arr.push_back({x, y});
            if (i == 0)
                grid[x][y] = 9;
            else
                grid[x][y] = i;
        }
        cin >> X;
        PrintBoard(N, M);
    }
}
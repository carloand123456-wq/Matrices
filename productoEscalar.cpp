#include <iostream>
using namespace std;
int main()
{
    int M[100][100], P[100][100];
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> M[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            P[i][j] = k * M[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << P[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
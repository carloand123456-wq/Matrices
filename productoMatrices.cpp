#include <iostream>
using namespace std;
int main()
{
    int M1[100][100], M2[100][100], MR[100][100];
    int n, m, p;
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> M1[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> M2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            MR[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                MR[i][j] = MR[i][j] + M1[i][k] * M2[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << MR[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int M1[100][100], M2[100][100], MR[100][100];
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> M1[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> M2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            MR[i][j] = M1[i][j] + M2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << MR[i][j] << " ";
        }
        cout << endl;
    }

    cout << "La sumatoria de la matriz es: " << s;
    return 0;
}
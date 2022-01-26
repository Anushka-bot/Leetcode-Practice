#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    int m = mat.size();
    int n = mat[0].size();
    int size1 = m * n;
    int size2 = r * c;
    int x = 0, y = 0;
    // cout << mat[0][0] << " " << mat[0][1] << " " << mat[1][0] << " " << mat[1][1] << endl;
    vector<vector<int>> matrx;
    if (size2 >= size1)
    {
        for (int j = 0; j < m; j++)
        {
            cout << y << " ";
            for (int i = 0; i < n; i++)
            {
                if (y < c)
                {
                    matrx[x].push_back(mat[j][i]);
                    y++;
                }
                else
                {
                    x++;
                    y = 0;
                    matrx[x].push_back(mat[j][i]);
                }
            }
        }
        return matrx;
    }
    return mat;
}
int main()
{
    vector<vector<int>> matrx, mat;
    mat = {{1, 2}, {3, 4}};
    cout << "enter r and c: ";
    int r, c;
    cin >> r >> c;
    matrx = matrixReshape(mat, r, c);
    for(auto it: matrx){
        for(auto it1: it){
            cout << it1 << " ";
        }
    }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, negatives;
    cout << "What the order of the matrix is? ";
    cin >> n;

    int mat[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "MAIN DIAGONAL: " << endl;
    for (int i = 0; i < n; i++) {
        cout << mat[i][i] << " ";
    }
    cout << endl;

    negatives = 0;
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] < 0) {
                negatives++;
            }
        }
    }

    cout << "NEGATIVE AMOUNT = " << negatives << endl;

    return 0;
}

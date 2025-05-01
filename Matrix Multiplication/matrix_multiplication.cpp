#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the dimension of 1st matrix (rows cols): ";
    cin >> m >> n;

    int p, q;
    cout << "Enter the dimension of 2nd matrix (rows cols): ";
    cin >> p >> q;

    if (n != p) {
        cout << "These two matrices cannot be multiplied!" << endl;
        return 0;
    }

    vector<vector<int>> a(m, vector<int>(n));
    vector<vector<int>> b(p, vector<int>(q));
    vector<vector<int>> c(m, vector<int>(q, 0));

    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }

    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < p; ++i)
        for (int j = 0; j < q; ++j) {
            cout << "b[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }

    for (int i = 0; i < m; ++i){
        for (int j = 0; j < q; ++j){
            for (int k = 0; k < n; ++k){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Resultant matrix C (A x B):" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j)
            cout << c[i][j] << " ";
        cout << endl;
    }

    return 0;
}

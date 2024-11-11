#include <iostream>
using namespace std;

int main() {
    int m, n, sum = 0;
    float avrg_column, avrg_row;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }

        if (avrg_row != 0 && avrg_row != sum / n) {
            cout << "NO";
            return 0;
        }
        avrg_row = sum / n;

        sum = 0;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += arr[j][i];
        }

        if (avrg_column != 0 && avrg_column != sum / n) {
            cout << "NO";
            return 0;
        }
        avrg_column = sum / n;

        sum = 0;
    }

    if (avrg_column == avrg_row) {
        cout << "YES";
        return 0;
    }

    cout << "NO";


    return 0;
}

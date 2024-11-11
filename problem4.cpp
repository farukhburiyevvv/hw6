#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m;
    int arr[m];
    for (int i = 1; i <= m; i++) {
        cin >> arr[i];
    }

    cin >> n;
    for (int i = 1; i <= m ; i++) {
        if (arr[i] == 0 && arr[i + 1] == 0 && arr[i + 2] == 0 ) n--;
    }

    if (n == 0) {
        cout << "YES";
        return 0;
    }
    cout << "No";
    return 0;
}

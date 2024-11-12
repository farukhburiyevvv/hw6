#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b, c, e, d;
    cin >> a >> b >> c >> e >> d;
    vector<bool> nums_dragon(d + 1, false);
    for (int i = a; i <= d; i += a) {
        nums_dragon[i] = true;
    }
    for (int i = b; i <= d; i += b) {
        nums_dragon[i] = true;
    }
    for (int i = c; i <= d; i += c) {
        nums_dragon[i] = true;
    }
    for (int i = e; i <= d; i += e) {
        nums_dragon[i] = true;
    }
    int numDragons = 0;
    for (int i = 1; i <= d; ++i) {
        if (nums_dragon[i]) {
            numDragons++;
        }
    }
    cout << numDragons << endl;
    return 0;
}

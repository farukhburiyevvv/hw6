#include <iostream>
using namespace std;

int main() {
    int a,b,c,e,d,count;
    // cin >> m;
    cin>>a>>b>>c>>e>>d;

    for (int i = 1; i <= d ; i++) {
        if (i%a==0) count++;
        if (i%b==0 && i%a!=0) count++;
        if (i%c==0 && i%b==0 && i%a!=0) count++;
        if (i%e==0 && i%b==0 && i%a!=0 && i%c!=0) count++;
    }

    cout<<count;
    return 0;
}

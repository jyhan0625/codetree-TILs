#include <iostream>
using namespace std;

int xset[11], yset[11];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        int x, y;
        cin >> x >> y;

        xset[x]++;
        yset[y]++;

    }

    int xcnt = 0, ycnt = 0;

    for(int i=0; i<n; i++) {

        if (xset[i] > 1) xcnt++;
        if (yset[i] > 1) ycnt++;

    }

    if (xcnt + ycnt <= 3) cout << 1;
    else cout << 0;

    return 0;
}
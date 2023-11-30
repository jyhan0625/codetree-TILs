#include <iostream>
using namespace std;
#define MAXL 100

int set[MAXL][MAXL];

int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

int main() {
    // 여기에 코드를 작성해주세요.

    int n, x, y , rot = 0;
    cin >> n;

    x = n / 2;
    y = n / 2;
    set[x][y] = 1;

    for(int i = 2; i<= n * n; i++) {

        int tx = x + dx[rot];
        int ty = y + dy[rot];

        if (tx >= 0 && tx <n && ty >= 0 && ty <n && set[tx][ty] == 0) {

            x = tx;
            y = ty;

        } 

        else {

            rot = (rot + 3) % 4;
            x += dx[rot];
            y += dy[rot];

        }

        set[x][y] = i;

    }

    for(int i =0; i<n; i++) {

        for(int j=0; j<n; j++) cout << set[i][j] << " ";
        cout << endl;

    }


    return 0;
}
#include <iostream>
using namespace std;
#define MAXL 100




int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
char set[MAXL][MAXL] = {'\0'};

int x, y, rot;
char ind = 'A';

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >> m;

    set[x][y] = ind;

    int times = n*m - 1;
    while(times--) {

        int tx = x + dx[rot];
        int ty = y + dy[rot];

        if (tx >= 0 && tx <n && ty >=0 && ty <m && set[tx][ty] == '\0') {

            x = tx;
            y = ty;

        }

        else {

            rot = (rot + 1) % 4;
            x += dx[rot];
            y += dy[rot];

        }

        ind++;
        if (ind > 'Z') ind = 65;

        set[x][y] = ind;


    }

    for(int i=0; i<n; i++) {

        for(int j=0; j<m; j++) cout << set[i][j] << " ";
        cout << endl;

    }

    return 0;
}
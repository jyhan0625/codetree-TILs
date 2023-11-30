#include <iostream>
using namespace std;
#define MAXL 100




int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

int x = 0, y = 0, rot = 1;
int set[MAXL][MAXL];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >> m;

    set[x][y] = 1;

    for(int i = 1; i<n*m; i++) {

        int tx = x + dx[rot];
        int ty = y + dy[rot];

        if (tx >= 0 && tx < n && ty >=0 && ty < m && set[tx][ty] == 0) {

            x = tx;
            y = ty;
            set[x][y] = i + 1;

        }

        else {

            rot = (rot + 3) % 4;

            x += dx[rot];
            y += dy[rot];
            set[x][y] = i + 1;


        }


    }

    for(int i=0; i<n; i++) {

        for(int j=0; j<m; j++) cout << set[i][j] << " ";
        cout << endl;

    }
    return 0;
}
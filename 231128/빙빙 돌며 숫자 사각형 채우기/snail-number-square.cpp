#include <iostream>
using namespace std;
#define MAXN 100

int set[MAXN][MAXN];

int x = 0, y = 0, rot = 0;

int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};


int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int r = n * m;

    set[x][y] = 1;

    for(int i=1; i<r; i++) {

        int tempx = x + dx[rot];
        int tempy = y + dy[rot];

        if (tempx>=0 && tempx < n && tempy>=0 && tempy < m && set[tempx][tempy] == 0) {

            x = tempx;
            y = tempy;
            set[x][y] = i + 1;

        }

        else {

            rot = (rot + 1) % 4;
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
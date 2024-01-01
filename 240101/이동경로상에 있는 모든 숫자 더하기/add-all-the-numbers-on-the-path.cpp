#include <iostream>
#include <string>
using namespace std;

int set[99][99];

int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

int dir = 3;

int main() {
    // 여기에 코드를 작성해주세요
    
    int n, t;
    string sen;
    cin >> n >> t >> sen;

    for(int i=0; i<n; i++) {

        for(int j=0; j<n; j++) {

            cin >> set[i][j];

        }

    }

    int x = n / 2, y = n / 2, sum = 0;

    sum += set[x][y];

    for(int i=0; i<t; i++) {

        if (sen[i] == 'R') {

            dir = (dir + 1) % 4;

        }

        else if (sen[i]  == 'L') {

            dir = (dir + 3) % 4;

        }

        else {

            int tx = x + dx[dir];
            int ty = y + dy[dir];

            if (tx >= 0 && tx < n && ty >= 0 && ty < n) {

                x = tx;
                y = ty;
                
                sum += set[x][y];

            }

        }

    }

    cout << sum;



    return 0;
}
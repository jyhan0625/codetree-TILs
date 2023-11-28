#include <iostream>
using namespace std;
#define MAXR 1000

int set[MAXR + 1]; // 시간순으로 동서남북 방위가 적힐 것
int map[2 * MAXR][2 * MAXR]; 

int x = MAXR, y = MAXR;

int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

/*

동 0
서 1
남 2
북 3


*/

int toDir(char ch) {

    if (ch=='N') return 3;
    else if (ch=='E') return 0;
    else if (ch=='S') return 1;
    else if (ch=='W') return 2;
 
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    int time = 1;
    map[x][y] = 1; // 마킹

    for(int i=0; i<n; i++) {

        char ch;
        int dist, dir;
        cin >> ch >> dist;
        dir = toDir(ch);

        while(dist--) {

            set[time++] = dir;

        }


    }

    for(int i=1; i<time; i++) {

         x += dx[set[i]];
         y += dy[set[i]];

         if (map[x][y] == 1) {
            cout << i;
            return 0;
         }

    }

    cout << -1;
    
    return 0;
}
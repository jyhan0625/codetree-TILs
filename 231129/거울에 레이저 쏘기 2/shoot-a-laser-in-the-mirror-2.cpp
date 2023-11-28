#include <iostream>
using namespace std;
#define MAXN 1000

/*

[/]
오른쪽 -> 위쪽 [반시계]
위쪽 -> 오른쪽 [시계]
왼쪽 -> 아래쪽 [반시계]
아래쪽 -> 왼쪽 [시계]

[\]
오른쪽 -> 아래쪽 [시계]
위쪽 -> 왼쪽 [반시계]
왼쪽 -> 위쪽 [시계]
아래쪽 -> 오른쪽 [반시계]

*/



char set[MAXN][MAXN] = {'\0'};

int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

int firstrot(int rot) {

    if (rot == 0) return (rot + 3) % 4;
    else if (rot == 1) return (rot + 1) % 4;
    else if (rot == 2) return (rot + 3) % 4;
    else if (rot == 3) return (rot + 1) % 4;

}

int secondrot(int rot) {

    if (rot == 0) return (rot + 1) % 4;
    else if (rot == 1) return (rot + 3) % 4;
    else if (rot == 2) return (rot + 1) % 4;
    else if (rot == 3) return (rot + 3) % 4;

}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i = 1; i<=n; i++) {

        for(int j=1; j<=n; j++) {

            cin >> set[i][j];

        }

    }

    int start;
    cin >> start;

    int x =0, y =0, rot = 0;

    if (start <= n) {

        x = 0;
        y = start;

    }

    else if (start <= 2 * n) {

        x = start % 4;
        y = n + 1;

    }

    else if (start <= 3 * n) {

        x = n + 1;
        y = 3 * n - start + 1;

    }

    else {

        x = 4 * n - start + 1;
        y = n + 1;

    }

    rot = ((start - 1) / n + 1) % 4;



    int cnt = 0;
    bool trigger = true;

    while(trigger) {

        x += dx[rot];
        y += dy[rot];

        if (set[x][y] == '\\') {

            cnt ++;
            rot = secondrot(rot);

        } 

        else if (set[x][y] == '/') {

            cnt ++;
            rot = firstrot(rot);

        }

        else trigger = false;




        

    }

    cout << cnt;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
#define OFFSET 1000

int x = OFFSET, y = OFFSET, rot = 3;

int map[2*OFFSET][2*OFFSET];

/*

N개의 명령 -> N번 움직임

L -> 왼쪽 전환
R -> 오른쪽 전환
F -> 앞으로

1초에 한 번 움직이기

몇 초 뒤에 다시 원점 돌아와?

*/

int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

int main() {
    // 여기에 코드를 작성해주세요.
    string com;
    cin >> com;
    int len = com.length();

    map[x][y] = 1;

    for(int i=0; i<len; i++) {

        if(com[i] == 'F') {

            x += dx[rot];
            y += dy[rot];

        }

        else if(com[i] == 'R') {

            rot = (rot + 1) % 4;

        }

        else if(com[i] == 'L') {

            rot = (rot - 3) % 4;

        }

        if (map[x][y] == 1) {

            cout << i + 1;
            return 0;

        }

    }

    cout << -1;

    
    return 0;
}
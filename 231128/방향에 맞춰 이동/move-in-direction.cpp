#include <iostream>
using namespace std;

int toDir(char ch) {

    if (ch == 'N') return 0;
    else if (ch == 'E') return 1;
    else if (ch == 'S') return 2;
    else if (ch == 'W') return 3;

}


int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;


    int x = 0, y = 0;

    while(n--) {

        char ch;
        int dist, dir;
        cin >> ch >> dist;
        dir = toDir(ch);

        x += dx[dir] * dist;
        y += dy[dir] * dist;


    }

    cout << x << " " << y;


    return 0;
}
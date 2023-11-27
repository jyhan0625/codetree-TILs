#include <iostream>
#include <string>
using namespace std;


int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

int main() {
    // 여기에 코드를 작성해주세요.

    string input;
    cin >> input;
    int len = input.length();

    int x = 0, y = 0, rot = 0;

    for(int i=0; i<len; i++) {

        if (input[i] == 'L') rot = (rot -1 + 4) % 4;
        else if (input[i] == 'R') rot = (rot + 1) % 4;
        else if (input[i] == 'F') {

            x += dx[rot];
            y += dy[rot];

        }

    }

    cout << x << " " << y;
    return 0;
}
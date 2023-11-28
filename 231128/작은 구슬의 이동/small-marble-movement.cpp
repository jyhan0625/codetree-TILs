#include <iostream>
using namespace std;
#define MAXN 50


int set[MAXN][MAXN];

int getdir(char d) {

    if (d=='L') return 3;
    else return 0;

}

int dx[4] = {0,1,-1,0}, dy[4] = {1,0,0,-1}; 


int main() {
    // 여기에 코드를 작성해주세요.

    int n, t, r, c;
    char d;
    cin >> n >> t >> r >> c >> d;
    int dir = getdir(d);
    c--;

    while(t--) {

        int tempc = c + dy[dir];

        if (tempc>=0 && tempc<n) {

            c = tempc;

        }

        else dir = 3 - dir;

    }

    cout << r << " " << c+1;
    return 0;
}
#include <iostream>
using namespace std;
#define MAXN 100

int set[MAXN][MAXN];

int dx[4] = {0,-1,0,1}, dy[4] = {1,0,-1,0};


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        for(int j=0; j<n; j++) {

            cin >> set[i][j];

        }

    }

    int ans = 0;
    for(int i=0; i<n; i++) {

        for(int j=0; j<n; j++) {


            int cnt = 0;
            for(int k=0; k<4; k++) {

                int x = i + dx[k];
                int y = j + dy[k];

                if (x>=0 && x<n && y>=0 && y < n) {

                    if (set[x][y] == 1) cnt++;

                }

            }

            if (cnt >=3) ans++;

        }

    }

    cout << ans;


    return 0;
}
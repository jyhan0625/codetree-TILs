#include <iostream>
using namespace std;

int dx[8] = {0,1,1,1,0,-1,-1,-1}, dy[8] = {1,1,0,-1,-1,-1,0,1};

char set[50][50];
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> set[i][j];

    int cnt = 0;

    for(int i=0; i<n; i++) {

        for(int j=0; j<m; j++) {

            if (set[i][j] != 'L') continue;

            for(int k=0; k<8; k++) {

                int x = i, y = j;

                for(int s =0; s<2; s++) {

                    x = x + dx[k];
                    y = y + dy[k];

                    if ((x >=0 && x <n && y>=0 && y<m) == false) break;
                    
                    if (set[x][y] != 'E') break;

                    if (s == 1) cnt++;

                }



            }

        }
        
    }

    cout << cnt;




    return 0;
}
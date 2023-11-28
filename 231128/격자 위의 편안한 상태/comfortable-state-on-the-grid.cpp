#include <iostream>
using namespace std;
#define MAXN 100


/*

N * N 격자
M번 진행 -> 한 번에 한 칸 색칠 -> 편안한지 확인

편안 : 4개 방위에 색칠되어 있는 게 딱 3개인 경우


*/

int set[MAXN][MAXN];

int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};


int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >> m;

    for(int i=0; i<m; i++) {

        int r, c;
        cin >> r >> c;
        r--;
        c--;

        set[r][c] = 1;

        int cnt = 0;
        for(int i=0; i<4; i++) {

            int tempr = r + dx[i];
            int tempc = c + dy[i];

            
            if(tempr>=0 && tempr<n && tempc>=0 && tempc<n && set[tempr][tempc] == 1) cnt++;
    
        } 

        if (cnt == 3) cout << 1 << endl;
        else cout << 0 << endl;

    }

    return 0;
}
#include <iostream>
using namespace std;

// 색이 다른 곳으로 점프
// 적어도 한칸 오른쪽 and 적어도 한칸 아래쪽
// 경유 장소가 2곳

char set[15][15];

int main() {
    // 여기에 코드를 작성해주세요.
    int r, c;
    cin >> r >> c;

    for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin >> set[i][j];

    if (set[0][0] == set[r-1][c-1]) {

        cout << 0;
        return 0;

    }

    int count =0;
    char state = set[0][0];
    for(int i=1; i<r-2; i++) {

        for(int j=1; j<c-2; j++) {

            if (set[i][j] != state) {

                state = set[i][j];

                for(int k=i+1; k<r-1; k++) {

                    for(int s= j +1; s<c-1; s++) {

                        if (set[k][s] != state) count ++;

                    }

                }

            }

        }
        
    }

    cout << count;


    return 0;
}
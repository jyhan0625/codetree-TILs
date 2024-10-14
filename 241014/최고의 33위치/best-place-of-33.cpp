#include <iostream>
using namespace std;

int space[20][20];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, ans = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> space[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for( int j=0; j<n; j++) {

            if ((i + 2 >= n) || (j + 2 >= n)) continue;

            int cnt = 0;
            for(int k=i; k!=i+3; k++) {
                for (int s =j; s!=j+3; s++) {
                    cnt += space[k][s];
                }
            }

            ans = max(ans, cnt);
        }
    }

    cout << ans;
    return 0;
}
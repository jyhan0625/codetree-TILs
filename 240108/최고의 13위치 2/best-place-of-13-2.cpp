#include <iostream>
#include <climits>
using namespace std;

int set[20][20];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> set[i][j];

    int cnt = INT_MIN;

    for(int i=0; i<n; i++) {

        for(int j=0; j<n-2; j++) {

            for(int k=i; k<n; k++) {

                for(int s=0; s<n-2; s++) {

                    if (k==i && abs(s-j) <= 2) continue;

                    cnt = max(cnt, set[i][j] + set[i][j+1] + set[i][j+2] + set[k][s] + set[k][s+1] + set[k][s+2]);



                }

            }
        }

    }

    cout << cnt;
    return 0;
}
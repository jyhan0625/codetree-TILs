#include <iostream>
using namespace std;

int set[3];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=0; i<3; i++) cin >> set[i];

    int cnt = 0;
    for(int i=1; i<=n; i++) {

        for(int j=1; j<=n; j++) {

            for(int k=1; k<=n; k++) if (abs(i - set[0]) <=2 || abs(j - set[1]) <=2 || abs(k - set[2]) <=2) cnt++;

        }

    }

    cout << cnt;
    return 0;
}
#include <iostream>
using namespace std;

int set[100][4];

int main() {
    // 여기에 코드를 작성해주세요.

    // a번, b번 교환, c번 확인

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        cin >> set[i][1] >> set[i][2] >> set[i][3];

    }

    int ans = 0;

    for(int i=1; i<=3; i++) {

        int cup[4] = {0};
        cup[i] = 1;

        int cnt = 0;

        for(int j=0; j<n; j++) {

            int tmp = 0;
            tmp = cup[set[j][1]];
            cup[set[j][1]] = cup[set[j][2]];
            cup[set[j][2]] = tmp;

            if (cup[set[j][3]]) cnt++;

        }

        ans = max(cnt, ans);



    }

    cout << ans;
    return 0;
}
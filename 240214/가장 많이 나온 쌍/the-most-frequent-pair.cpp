#include <iostream>
using namespace std;

int set[100][2];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >> m;

    for(int i=0; i<m; i++) {

        int a, b;
        cin >> a >> b;

        set[i][0] = min(a, b);
        set[i][1] = max(a, b);

    }

    int ans = 0;

    for(int i=1; i<=n; i++) {

        for(int j=i+1; j<=n; j++) {

            int cnt = 0;

            for(int k=0; k<m; k++) {

                if (i == set[k][0] && j == set[k][1]) cnt++;

            }

            ans = max(ans, cnt);

        }

    }

    cout << ans;

    return 0;
}
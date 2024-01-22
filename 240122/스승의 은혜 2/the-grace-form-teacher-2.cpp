#include <iostream>
#include <algorithm>
using namespace std;

int set[1000];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++) cin >> set[i];

    int ans = 0;

    for(int i=0; i<n; i++) {

        set[i] /= 2;
        sort(set, set + n);

        int cnt = 0;
        for(int money = m, j = 0; money>=0; j++) {

            cnt++;
            money -= set[j];

        }

        cnt--;

        ans = max(ans, cnt);
        set[i] *= 2;

    }


    cout << ans;

    return 0;
}
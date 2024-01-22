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

        int temp[1000];
        for(int i=0; i<n; i++) temp[i] = set[i];
        temp[i] /= 2;

        sort(temp, temp + n);

        int cnt = 0;
        for(int money = m, j = 0; money>0, j < n; j++) {

            money -= temp[j];
            if (money>=0) cnt++;

        }

        ans = max(ans, cnt);

    }


    cout << ans;

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int set[1000];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> set[i];

    sort(set, set + n);

    int ans = 0;

    for(int i=0; i<n; i++) { // 시작지점

        int cnt = 0;

        bool trig = true;

        for(int j=i; j<n; j++) {

            if (set[j] - set[i] <= 3) cnt++;
            else break;

        }

        ans = max(ans, cnt);

    }

    cout << ans;


    return 0;
}
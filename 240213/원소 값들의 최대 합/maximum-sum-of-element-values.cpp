#include <iostream>
#include <climits>
using namespace std;

int set[101];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++) cin >> set[i];

    int ans = INT_MIN;

    for(int i=1; i<n; i++) { // 시작위치

        int sum = 0;
        int next = 1;

        for(int j=0; j<m; j++) {

            sum += set[next];
            next = set[next];
        }

        ans = max(ans, sum);

    }

    cout << ans;

    return 0;
}
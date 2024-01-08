#include <iostream>
#include <climits>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++) cin >> set[i];

    int ans = INT_MIN;

    for(int i = 0; i<= n - k; i++) {

        int sum = 0;

        for(int j=i; j<i+k; j++) sum += set[j];

        ans = max(sum, ans);

    }

    cout << ans;

    return 0;
}
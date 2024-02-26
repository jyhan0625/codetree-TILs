#include <iostream>
#include <climits>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k, start = 10000, end = 0;
    cin >> n >> k;

    for(int i=0; i<n;i++) {

        cin >> set[i];
        start = min(start, set[i]);
        end = max(end, set[i]);

    }

    if (end - start <= k) {

        cout << k - end;
        return 0;

    }

    int ans = INT_MAX;

    for(int i=start; i<=end-k; i++) {

        int cost = 0;

        for(int j=0; j<n; j++) {

            if(i > set[j]) cost += (i - set[j]);
            else if (i + k < set[j]) cost += (set[j] - i - k);

        }

        ans = min(ans, cost);

    }

    cout << ans;


    return 0;
}
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, h, t;
    cin >> n >> h >> t;
    for(int i=0; i<n; i++) {

        int num;
        cin >> num;

        set[i] = abs(num - h);

    }

    int ans = INT_MAX;
    int tmp[100];

    for(int i=0; i<n; i++) {

        int sum = 0;
        for(int j=i; j<i+t; j++) {

            if (j>=n | j < 0) break;
            sum += set[j];

        }

        ans = min(ans, sum);

    }

    cout << ans; // 최소 비용

    return 0;
}
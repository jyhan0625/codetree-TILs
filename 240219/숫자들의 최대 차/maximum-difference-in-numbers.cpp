#include <iostream>
#include <algorithm>
using namespace std;

int set[1000];

int main() {

    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> set[i];
    sort(set, set + n);

    int ans = 0;

    for(int i=0; i<n; i++) { // 시작지점

        int cnt = 0;
        for(int j=i; j<n-1; j++) {

            if (abs(set[i] - set[j]) <= k) cnt ++;

        }

        ans = max(ans, cnt);

    }

    cout << ans;

}
#include <iostream>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++) cin >> set[i];

    int ans = -1;

    for(int i=0; i<n; i++) {

        for(int j=i+1; j<n; j++) {

            if (set[i] == set[j]) {

                if (j - i <= k) {

                    ans = max(ans, set[i]);

                }

            }

        }

    }

    cout << ans;
    return 0;
}
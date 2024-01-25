#include <iostream>
#include <algorithm>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> set[i];

    int ans = 0;

    for(int i = 1; i<=100; i++) { // 등차중항 설정 : i

        int cnt = 0;
        for(int j=0; j<n; j++) {

            for(int k=j+1; k<n; k++) {

                if (set[j] + set[k] == i * 2) cnt++;

            }

        }

        ans = max(ans, cnt);

    }

    cout << ans;

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> set[i];
    sort(set, set + n);

    // 공차가 양수일때 까지만 하면 된다.

    int ans = 0;

    for(int i=1; i<=set[n-1]; i++) { // 순차적으로 돌 i

        for(int j=0; j<n; j++) {

            if (i - set[j] <= 0) break; // 공차가 음수일 때 그만

            int dist = i - set[j]; // 공차 설정

            for(int k=0; k<n; k++) if (i - set[k] == -dist) ans++;
        }
    
    }

    cout << ans;

    return 0;
}
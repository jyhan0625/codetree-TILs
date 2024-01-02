#include <iostream>
#include <climits>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> set[i];

    int ans = INT_MIN;
    for(int i=0; i<n; i++) {

        for(int j=i+2; j<n; j++) {

            int val = set[i] + set[j];

            ans = max(val, ans);

        }

    }

    cout << ans;

    return 0;
}
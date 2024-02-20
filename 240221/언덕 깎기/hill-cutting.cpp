#include <iostream>
#include <climits>
using namespace std;

int set[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> set[i];

    int ans = INT_MAX;

    for(int i=0; i<=83; i++) {

        int score = 0;

        for(int j=0; j<n; j++) {

            if (i > set[j]) score += (i - set[j]) * (i - set[j]);

            else if (i + 17 < set[j]) score += (set[j] - (i + 17)) * (set[j] - (i + 17));

        }

        ans = min(score, ans);

    }

    cout << ans;


    return 0;
}
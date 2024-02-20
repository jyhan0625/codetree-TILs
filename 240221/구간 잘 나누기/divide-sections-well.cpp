#include <iostream>
#include <climits>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int minnum = INT_MAX, maxnum = INT_MIN, total = 0;

    for(int i=0; i<n; i++) {

        cin >> set[i];
        minnum = min(minnum, set[i]);
        maxnum = max(maxnum, set[i]);
        total += set[i];
        
    }

    int ans = INT_MAX;

    for(int i = minnum; i <= total; i++) {
        
        int cnt = 0, sum = set[0], summax = 0;

        for(int j=1; j<n; j++) {

            if (sum + set[j] <= i) sum += set[j];

            else {

                cnt++;
                summax = max(sum, summax);
                sum = set[j];

            }

            if (j == n-1) summax = max(sum, summax);

        }

        if ((cnt+1) <= m) ans = min(ans, summax);

    }

    cout << ans;

    return 0;
}
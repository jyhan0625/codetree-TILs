#include <iostream>
#include <climits>
using namespace std;

int set[101];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k, maxnum = 0;
    cin >> n >> k;
    for(int i=1; i<=n; i++) {
        cin >> set[i];
        maxnum = max(set[i], maxnum);
    }

    int ans = INT_MAX;

    for(int a=max(set[1], set[n]); a<=maxnum; a++) {

        int check[n+1] = {0};
        int index = 1;

        for(int i=1; i<=n; i++) {
            if (set[i] <= a) check[index++] = i;
        }

        bool trig = true;
        for(int i=1; i<index-1; i++) {
            if (abs(check[i] - check[i+1]) > k) {
                trig = false;
                break;
            }
        }

        if (trig) ans = min(ans, a);

    }
    
    cout << ans;

    return 0;
}
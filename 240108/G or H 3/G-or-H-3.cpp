#include <iostream>
#include <climits>
using namespace std;

int set[10000];
int main() {
    // 여기에 코드를 작성해주세요.

    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++) {

        int num;
        char input;
        cin >> num >> input;

        if (input == 'G') set[num] = 1;
        else if (input == 'H') set[num] = 2;

    }

    int ans = INT_MIN;

    for(int i=1; i<=n-k+1; i++) {

        int sum = 0;

        for(int j=i; j<=i+k; j++) {

            sum += set[j];

        }

        ans = max(sum, ans);

    }

    cout << ans;

    return 0;
}
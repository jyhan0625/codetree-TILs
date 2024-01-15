#include <iostream>
using namespace std;

int set[101];

int main() {

    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++) {

        int val, x;
        cin >> val >> x;
        set[x] += val;

    }

    int ans = 0;
    for(int i=0; i<100; i++) {

        int sum = 0;
        for(int j=i-k; j<=i+k; j++) {

            if (j >= 101 || j < 0) continue;
            sum += set[j];

        }

        ans = max(ans, sum);

    }


    cout << ans;

    return 0;

}
#include <iostream>
using namespace std;

int set[100];

int main() {

    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++) {

        int val, x;
        cin >> val >> x;
        set[x] = val;

    }

    int ans = 0;
    for(int i=0; i<100; i++) {

        int sum = 0;
        for(int j=i; j<=i+2*k; j++) {

            sum += set[j];

        }

        ans = max(ans, sum);

    }


    cout << ans;

    return 0;

}
#include <iostream>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++) {

        int state, num;
        cin >> num >> state;

        set[state] = num;

    }

    int ans = 0;
    for(int i=0; i<100 - 2 * k; i++) {

        int sum = 0;
        for(int j = i; j<= i + (2 * k); j++) {

            sum += set[j];

        }

        ans = max(ans, sum);

    }
 


    cout << ans;


    return 0;
}
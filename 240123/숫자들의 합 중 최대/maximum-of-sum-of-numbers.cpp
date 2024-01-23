#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int x, y;
    cin >> x >> y;

    int ans = 0;

    for(int i=x; i<=y; i++) {

        int sum = 0;

        int tmp = i;
        while(tmp) {

            sum += tmp % 10;
            tmp /= 10;

        }

        ans = max(ans, sum);

    }

    cout << ans;

    return 0;
}
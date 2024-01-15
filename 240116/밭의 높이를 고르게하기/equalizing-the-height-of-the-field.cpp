#include <iostream>
#include <algorithm>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, h, t;
    cin >> n >> h >> t;
    for(int i=0; i<n; i++) {

        int num;
        cin >> num;

        set[i] = abs(num - h);

    }

    sort(set, set + n);

    int ans = 0;

    for(int i=0; i<t; i++) {

        ans += set[i];

    }



    cout << ans; // 최소 비용

    return 0;
}
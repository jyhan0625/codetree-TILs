#include <iostream>
using namespace std;


int set[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int maxh = 0;
    for(int i=0; i<n; i++) {
        cin >> set[i];
        maxh = max(maxh, set[i]);
    }

    int ans = 0;

    for(int i=1; i<=maxh; i++) { // 해수면 서서히 높여가기

        int tmp[100];
        for(int j=0; j<n; j++) {
            
            if (set[j] - i < 0) tmp[j] = 0;
            else tmp[j] = set[j] - i;

        }

        int cnt = 0;
        if (tmp[0]) cnt++;

        for(int j=0; j<n-1; j++) {

            if (tmp[j] != tmp[j+1] && tmp[j] == 0) cnt++;

        }

        ans = max(cnt, ans);

    }

    cout << ans;

    return 0;
}
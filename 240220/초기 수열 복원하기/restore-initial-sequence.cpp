#include <iostream>
#include <algorithm>
using namespace std;

int set[999];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=0; i<n-1; i++) cin >> set[i];

    for(int i=1; i<=n; i++) {

        int ans[1000] = {0};

        ans[0] = i;

        for(int j=1; j<n; j++) ans[j] = abs(set[j-1] - ans[j-1]);

        int test[1000] = {0};
        for(int j=0; j<n; j++) test[j] = ans[j];

        sort(test, test + n);

        bool trig = true;
        for(int j=0; j<n-1; j++) {

            if (test[j] == test[j+1]) trig = false;

        }

        if (trig) {

            for(int j=0; j<n; j++) cout << ans[j] << " ";
            return 0;

        }
    }

    return 0;
}
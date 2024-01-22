#include <iostream>
using namespace std;

int set[100][1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        int a, b;
        cin >> a >> b;

        for(int j=a; j<b; j++) {

            set[i][j] = 1;

        }

    }

    int ans = 0;

    for(int i=0; i<n; i++) {

        int sum = 0;

        for(int j=0; j<1000; j++) {

            bool trig = false;

            for(int k=0; k<n; k++) {

                if (k == i) continue;

                if (set[k][j] == 1) trig = true;

            }

            if (trig) sum++;

        }

        ans = max(ans, sum);

    }

    cout << ans;


    return 0;
}
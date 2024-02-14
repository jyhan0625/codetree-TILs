#include <iostream>
using namespace std;

int set[10][2];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        int a, b;
        cin >> a >> b;
        set[i][0] = a;
        set[i][1] = b;

    }

    int ans = 1;

    while(true) {

        bool trig = true;

        int test = ans * 2;
        for(int i=0; i<n; i++, test*=2) {

            if (test < set[i][0] || test > set[i][1]) {

                trig = false;
                break;

            }

        }


        if (trig) {

            cout << ans;
            return 0;

        }

        ans++;

    }



    return 0;
}
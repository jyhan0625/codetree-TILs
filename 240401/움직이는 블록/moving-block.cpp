#include <iostream>
#include <climits>
using namespace std;

int set[10000];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        cin >> set[i];

    }

    bool trig = true;
    int times = 0;

    while(trig) {

        int MAX = INT_MIN, index_M;
        int MIN = INT_MAX, index_m;

        for(int j=0; j<n; j++) {

            if (set[j] > MAX) {

                MAX = set[j];
                index_M = j;

            }

            if (set[j] < MIN) {

                MIN = set[j];
                index_m = j;

            }

        }

        if (MAX == MIN) {
            trig = false;
            break;
        }

        set[index_M]--;
        set[index_m]++;
        times++;

    }

    cout << times;





    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int s, n;
    cin >> n >> s;

    for(int i=0; i<n; i++) cin >> set[i];

    int dif = INT_MAX;

    for(int i=0; i<n; i++) {

        for(int j=i+1; j<n; j++) {

            int sum = 0;

            for(int k=0; k<n; k++) {

                if (k == i || k == j) continue;

                sum += set[k];

            }

            dif = min(dif, abs(sum - s));

        }

    }

    cout << dif;

    return 0;
}
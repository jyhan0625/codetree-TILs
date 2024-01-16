#include <iostream>
#include <climits>
using namespace std;

int set[6];

int main() {
    // 여기에 코드를 작성해주세요.
    int total = 0;

    for(int i=0; i<6; i++) {
        cin >> set[i];
        total += set[i];
    }

    int ans = INT_MAX;

    for(int i=0; i<=3; i++) {

        for(int j=i+1; j<=4; j++) {

            int asum = 0;
            int bsum = 0;
            for(int k=j+1; k<=5; k++) {

                asum += set[k];

            }

            bsum = total - asum;

            ans = min(ans, abs(asum - bsum));

        }

    }

    cout << ans;

    return 0;
}
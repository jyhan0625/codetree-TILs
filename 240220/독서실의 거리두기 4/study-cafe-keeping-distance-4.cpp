#include <iostream>
#include <climits>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string seat;
    cin >> n >> seat;

    for(int i=0; i<n; i++) {

        if (seat[i] == '1') set[i] = 1;
        else if (seat[i] == '0') set[i] = 0;

    }

    int ans = INT_MIN;

    for(int i=0; i<n; i++) {

        if (set[i] == 1) continue;

        for(int j=i+1; j<n; j++) {

            if (set[j] == 1) continue;


            set[i] = 1;
            set[j] = 1;


            int index = 0;
            int one[100] = {0};

            for(int k=0; k<n; k++) {

                if (set[k] == 1) {

                    one[index++] = k;

                }

            } 

            int dist = INT_MAX;
            for(int k=0; k<index-1; k++) {

                dist = min(dist, abs(one[k] - one[k+1]));

            }

            ans = max(ans, dist);

            set[i] = 0;
            set[j] = 0;

        }

    }


    

    cout << ans;

    return 0;
}
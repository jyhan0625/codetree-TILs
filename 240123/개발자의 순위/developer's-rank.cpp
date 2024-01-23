#include <iostream>
using namespace std;

int set[10][20];

int main() {
    // 여기에 코드를 작성해주세요.
    int k, n;
    cin >> k >> n;

    for(int i=0; i<k; i++) {

        for(int j=0; j<n; j++) cin >> set[i][j];

    }

    int cnt = 0;

    for(int i=1; i<=4; i++) {

        for(int j=1; j<=4; j++) {

            if (i == j) continue;

            bool trig = true;

            for(int s = 0; s<k; s++) {

                int indexi, indexj;

                for(int p = 0; p<n; p++) {

                    if (i == set[s][p]) indexi = p;
                    if (j == set[s][p]) indexj = p;

                }  

                if (indexi <= indexj) trig = false;

            }

            if (trig) cnt++;

        }

    }
    
    cout << cnt;

    return 0;
}
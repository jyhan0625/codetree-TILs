#include <iostream>
using namespace std;

int set1[3], set2[3];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=0; i<3; i++) cin >> set1[i];
    for(int i=0; i<3; i++) cin >> set2[i];

    int cnt = 0;

    for(int i=1; i<=n; i++) {

        for(int j=1; j<=n; j++) {

            for(int k=1; k<=n; k++) {
                
                int time = 0;

                if(abs(set1[0] - i) <= 2 || abs(set1[0] - i) >= n - 2) {

                    if(abs(set1[1] - j) <= 2 || abs(set1[1] - j) >= n - 2) {

                        if(abs(set1[2] - k) <= 2 || abs(set1[2] - k) >= n - 2) {
                            
                            cnt++;
                            time++;

                        }

                    }

                }
                
                if(abs(set2[0] - i) <= 2 || abs(set2[0] - i) >= n - 2) {

                    if(abs(set2[1] - j) <= 2 || abs(set2[1] - j) >= n - 2) {

                        if(abs(set2[2] - k) <= 2 || abs(set2[2] - k) >= n - 2) {
                            
                            cnt++;
                            time++;

                        }

                    }

                }

                if (time == 2) cnt--;



            }

        }

    }

    

    cout << cnt;
    return 0;
}
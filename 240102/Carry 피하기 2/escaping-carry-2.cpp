#include <iostream>
using namespace std;

int set[20];

bool trigger = true;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> set[i];

    int ans = -1;

    for(int i=0; i<n; i++) {

        for(int j=i+1; j<n; j++) {

            for(int k = j + 1; k<n; k++) {

                int n1 = set[i], n2 = set[j], n3 = set[k];

                int gnd = 10;

                int sum = 0;

                bool check = false;

                while(n1 > 0 || n2 > 0 || n3 > 0) {

                    int t1 = n1 % gnd;
                    int t2 = n2 % gnd;
                    int t3 = n3 % gnd;
                    n1 = n1 / gnd;
                    n2 = n2 / gnd;
                    n3 = n3 / gnd;

                    if (t1 + t2 + t3 >=10) {

                        check = true;
                        break;

                    }
                
                }

                if (check == false) {

                    ans = max(ans, set[i] + set[j] + set[k]);

                }   

            }

        }

    }

    cout << ans;

    return 0;
}
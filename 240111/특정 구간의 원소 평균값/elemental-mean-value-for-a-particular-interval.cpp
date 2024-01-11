#include <iostream>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int ans = 0;
    for(int i=0; i<n; i++) cin >> set[i];

    for(int i=0; i<n; i++) {

        for(int j=i; j<n; j++) {

            float sum = 0;
            for(int k=i; k<=j; k++) {

                sum += set[k];

            }

            sum /= (j - i + 1);

            for(int k=i; k<=j; k++) {

                if (sum == set[k]) {

                    ans++;
                    break;

                }

            } 


        }

    }

    cout << ans;


    return 0;
}
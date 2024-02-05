#include <iostream>
#include <climits>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i=0; i<n; i++) cin >> set[i];

    int ans = INT_MAX;

    for(int i=0; i<n; i++) { // 2배할 수 : i

        set[i] *= 2;

        for(int j=0; j<n; j++) { // 제외할 수 : j

            int tmp[100] = {0};

            int k = 0;
            for(int s=0; s<n; s++) {
                
                if (s == j) continue;
                else tmp[k++] = set[s];

            }

            int sum = 0;
            for(int s=0; s<n-2; s++) sum += abs(tmp[s] - tmp[s+1]);
            
            ans = min(sum, ans);

        }

        set[i] /= 2;

    }

    cout << ans;


    return 0;
}
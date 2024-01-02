#include <iostream>
#include <climits>
using namespace std;

int set[1003];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i=0; i<n; i++) cin >> set[i];

    int ans = INT_MAX;
    for(int i=0; i<n; i++) {

        int index = i + 1;
        int sum = 0;
        for(int j = 0; j<n-1; j++) {

            index = index % (n);
            sum += set[index] * (j + 1);
            index++;

        }

        ans = min(sum, ans);


    }

    cout << ans;

    
    return 0;
}
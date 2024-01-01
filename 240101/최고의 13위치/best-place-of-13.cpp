#include <iostream>
#include <algorithm>
using namespace std;

int set[20][20];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> set[i][j];

    int maxcount = 0;

    for(int i=0; i<n; i++) {

        for(int j=0; j<n-2; j++) {

            maxcount = max(maxcount, set[i][j] + set[i][j + 1] + set[i][j+2]);

        }

    }

    cout << maxcount;
    
    return 0;
}
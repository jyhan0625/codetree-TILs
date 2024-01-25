#include <iostream>
#include <algorithm>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    int maxnum = 0;
    for(int i=0; i<n; i++) {

        cin >> set[i];
        maxnum = max(maxnum, set[i]);

    }

    int ans = 0;

    for(int i=1; i<=maxnum; i++) { // 순차적으로 돌 i

        for(int j = 0; j<n; j++) { // 공차의 대상 설정
            
            int dist = i - set[j];
            if (dist <= 0) continue;

            for(int k=0; k<n; k++) if (set[k] - i == dist) ans++; // 같은 공차를 가지고 있는 애를 찾는다.

        }    
    }

    cout << ans;

    return 0;
}
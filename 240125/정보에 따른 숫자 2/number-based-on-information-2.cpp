#include <iostream>
#include <climits>
using namespace std;


//SSSNNNSNSNSN
// a부터 b 사이의 각각의 x가 S까지의 거리 <= N까지의 거리 : 특별한 위치


char set[1001];

int main() {
    // 여기에 코드를 작성해주세요.

    int T, a, b;
    cin >> T >> a >> b;

    for(int i=0; i<T; i++) {

        char alpha;
        int index;
        cin >> alpha >> index;

        set[index] = alpha;

    }

    int ans = 0;
    
    for(int i=a; i<=b; i++) { // 각각의 x를 선택 : i

        // 1부터 1000까지 모든 수를 돌아보면서 S가 들어있는 가장 작은 거리 찾기
        // 1부터 1000까지 모든 수를 돌아보면서 N가 들어있는 가장 작은 거리 찾기

        int distS = INT_MAX;
        int distN = INT_MAX;

        bool trigS = false, trigN = false;

        for(int j = 1; j<=1000; j++) {

            if (set[j] == 'S') {
                distS = min(distS, abs(j - i));
                trigS = true;
            }

            else if (set[j] == 'N') {
                distN = min(distN, abs(j - i));
                trigN = true;
            }

        }

        if (trigS && trigN && distS <= distN) ans++;
    
    }

    cout <<ans;

    return 0;
}
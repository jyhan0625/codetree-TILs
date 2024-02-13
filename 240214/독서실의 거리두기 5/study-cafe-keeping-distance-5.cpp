#include <iostream>
#include <climits>
using namespace std;

long int set[21];
int main() {
    // 여기에 코드를 작성해주세요.
    long int n, num;
    cin >> n >> num;
    
    int index = n;
    for(int i=1; i<=n; i++) {

        set[index--] = num % 10;
        num /= 10;

    }

    int ans = 0;

    for(int i=1; i<=n; i++) { // 학생 한 명 앉게 하기

        if (set[i]) continue;
        else set[i] = 1;

        int len = 0;

        int record[21] = {0};

        for(int j=1; j<=20; j++) if (set[j] == 1) record[len++] = j;

        int dist = INT_MAX;

        for(int j=0; j<len-1; j++) {

            dist = min(dist, abs(record[j] - record[j+1]));

        }

        ans = max(dist, ans);

        set[i] = 0;

    }

    cout << ans;


    return 0;
}
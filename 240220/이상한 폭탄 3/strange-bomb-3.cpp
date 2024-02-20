#include <iostream>
#include <climits>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k;
    cin >> n >> k;
    int maxnum = INT_MIN;

    for(int i=0; i<n; i++) {

        cin >> set[i];
        maxnum = max(set[i], maxnum);

    }

    int bomb = 0, maxcnt = 0;

    for(int i=1; i<=maxnum; i++) {

        int list[100] = {0};
        int index = 0;

        for(int j=0; j<n; j++) {

            if (set[j] == i) list[index++] = j;

        }

        int cnt = 0;
        for(int j=0; j<index-1; j++) {

            if(abs(list[j] - list[j+1]) <= i) cnt++;

        }

        if (maxcnt <= cnt && cnt != 0) {

            bomb = i;
            maxcnt = cnt;

        }

    }

    cout << bomb;


    return 0;
}
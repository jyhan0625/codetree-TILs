#include <iostream>
#include <climits>
using namespace std;

char set[101];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int start = INT_MAX;
    int end = INT_MIN;
    for(int i=0; i<n; i++) {

        char val;
        int x;
        cin >> x >> val;

        set[x] = val;

        start = min(start, x);
        end = max(end, x);

    }


    int ans = 0;
    for(int i=1; i<=end-start; i++) { // 범위설정

        for(int j=start; j<=end; j++) { // 시작점 위치

            int gnum = 0;
            int hnum = 0;
            int s = INT_MAX;
            int e = INT_MIN;
            for(int k=j; k<=j+i; k++) {

                if (k > end || k < start) continue;

                if (set[k] == 'G') {
                    gnum++;
                    s  = min(s, k);
                    e = max(e, k);}

                else if (set[k] == 'H') {
                    hnum++;
                    s  = min(s, k);
                    e = max(e, k);} 

            }

            if (gnum == hnum) ans = max(ans, abs(e - s));

        }

    }   


    cout << ans;

    return 0;
}
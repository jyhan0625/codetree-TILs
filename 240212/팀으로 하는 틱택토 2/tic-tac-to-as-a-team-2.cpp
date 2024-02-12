#include <iostream>
using namespace std;

int set[3][3];
int win[10][10];

int main() {
    // 여기에 코드를 작성해주세요.

    for(int i=0; i<3; i++) {

        int x;
        cin >> x;

        int a = x / 100;
        int b = (x / 10) % 10;
        int c = x % 10;

        set[i][0] = a;
        set[i][1] = b;
        set[i][2] = c;

    }

    //(1, 1)부터 (9, 9) 집합까지 1 이상의 점수가 들어있는 집단의 개수를 센다.


    // 첫번째 가로로 체크
    
    for(int i=0; i<3; i++) {

        int cnt[10] = {0};
        for(int j=0; j<3; j++) {

            cnt[set[i][j]]++;

        }

        bool trig = false;

        for(int j=1; j<10; j++) {

            if (cnt[j] == 2) {
                trig = true;
                break;
            }

        }

        if (trig) {

            int a, b; // 2개 있는 건 a, 1개 있는 건 b

            for(int j=1; j<10; j++) {

                if (cnt[j] == 2) a = j;
                else if (cnt[j] == 1) b = j;

            }

            int tmp = min(a, b);
            b = max(a, b);
            a = tmp;

            win[a][b]++;

        }

    }

    // 두번쨰 세로로 체크

    for(int j=0; j<3; j++) {

        int cnt[10] = {0};
        for(int i=0; i<3; i++) {

            cnt[set[i][j]]++;

        }

        bool trig = false;

        for(int i=1; i<10; i++) {

            if (cnt[i] == 2) {
                trig = true;
                break;
            }

        }

        if (trig) {

            int a, b; // 2개 있는 건 a, 1개 있는 건 b

            for(int i=1; i<10; i++) {

                if (cnt[i] == 2) a = i;
                else if (cnt[i] == 1) b = i;

            }

            int tmp = min(a, b);
            b = max(a, b);
            a = tmp;

            win[a][b]++;

        }

    }

    // 세번째 왼쪽 상향으로 체크

    int cnt[10] = {0};

    for(int i=0, j=0; i<3; i++, j++) {

        cnt[set[i][j]]++;

    }

    bool trig = false;

    for(int i=1; i<10; i++) {

        if (cnt[i] == 2) {

            trig = true;
            break;

        }
    }

    if (trig) {

        int a, b;

        for(int i=1; i<10; i++) {

            if (cnt[i] == 2) a = i;
            else if (cnt[i] == 1) b = i;

        }

        int tmp = min(a, b);
        b = max(a, b);
        a = tmp;

        win[a][b]++;

    }

    // 네번째 오른쪽 상향으로 체크

    for(int i=0; i<10; i++) cnt[i] = {0};

    for(int i=0, j=2; i<3; i++, j--) {

        cnt[set[i][j]]++;

    }

    trig = false;

    for(int i=1; i<10; i++) {

        if (cnt[i] == 2) {

            trig = true;
            break;

        }

    }

    if (trig) {

        int a, b;

        for(int i=1; i<10; i++) {

            if (cnt[i] == 2) a = i;
            else if (cnt[i] == 1) b = i; 

        }

        int tmp = min(a, b);
        b = max(a, b);
        a = tmp;

        win[a][b]++;

    }

    int ans = 0;

    for(int i=1; i<10; i++) {

        for(int j=1; j<10; j++) {

            if (win[i][j] != 0) {
                
                ans ++;

            }

        }

    }

    cout << ans;

    return 0;
}
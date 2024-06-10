#include <iostream>
#include <vector>

using namespace std;

int n, ans;

int set[1001];

class newdata {

    public:
    int x, y;

    newdata(int x, int y) {

        this->x = x;
        this->y = y;

    }
    newdata(){}

};

newdata d[15];

// cur은 현재 어디까지인지 인덱스
// num은 line의 개수
// ans는 점수

void lines(int cur, int num, int curans) {

    if(cur == n) {

        ans = max(ans, curans);
        return;

    }


    for(int i=cur; i<n; i++) {

        for(int j=d[cur].x; j<=d[cur].y; j++) {

            if (set[j] != 0) return;

        }

        for(int j=d[cur].x; j<=d[cur].y; j++) {

            set[j]++;

        }

        lines(cur+1, num+1, curans+1);

        for(int j=d[cur].x; j<=d[cur].y; j++) {

            set[j]--;

        }


    }




}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n;

    for(int i=0; i<n; i++) {

        int x, y;
        cin >> x >> y;
        d[i] = newdata(x, y);

    }

    lines(0, 0, 0);
    cout << ans;

    return 0;
}
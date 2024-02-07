#include <iostream>
#include <climits>
using namespace std;

class point {

    public:
    int x, y;

    point(int x, int y) {

        this->x = x;
        this->y = y;

    }
    point(){}

};

point set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    int minx = INT_MAX, maxx = INT_MIN, miny = INT_MAX, maxy = INT_MIN;

    for(int i=0; i<n; i++) {

        int x, y;
        cin >> x >> y;
        set[i] = point(x, y);

        minx = min(minx, x);
        maxx = max(maxx, x);
        miny = min(miny, y);
        maxy = max(maxy, y);

    }

    int ans = n;

    for(int i=minx-1; i<=maxx+1; i+=2) {

        for(int j =miny-1; j<=maxy+1; j+=2) { // x축 y축 구분선 생성 (i, j)

            int one = 0;
            int two = 0;
            int three = 0;
            int four = 0;

            for(int k=0; k<n; k++) {

                if (set[k].x > i && set[k].y > j) one++;
                else if (set[k].x < i && set[k].y > j) two++;
                else if (set[k].x < i && set[k].y < j) three++;
                else if (set[k].x > i && set[k].y < j) four++;

            }

            ans = min(ans, max(one, max(two, max(three, four))));

        }

    }

    cout << ans;

    return 0;
}
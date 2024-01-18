#include <iostream>
#include <climits>
using namespace std;

class cord {

    public:

    int x, y;

    cord(int x, int y) {

        this->x = x;
        this->y = y;

    }
    cord() {}


};


cord set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    for(int i=0; i<n; i++) {

        int x, y;
        cin >> x >> y;
        set[i] = cord(x, y);

    }

    int ans = INT_MAX;
    for(int i=0; i<n; i++) {

        int minx = INT_MAX, maxx = INT_MIN, miny = INT_MAX, maxy = INT_MIN;

        for(int j=0; j<n; j++) {

            if(i == j) continue;

            minx = min(minx, set[j].x);
            maxx = max(maxx, set[j].x);

            miny = min(miny, set[j].y);
            maxy = max(maxy, set[j].y);

        }
        
        ans = min(ans, (maxx - minx) * (maxy - miny));

    }


    cout << ans;

    return 0;
}
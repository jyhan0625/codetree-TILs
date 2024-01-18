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
    point() {}

};

point set[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        int x, y;
        cin >> x >> y;
        set[i] = point(x, y);

    }

    int ans = INT_MAX;

    for(int i=0; i<n; i++) {

        for(int j=i+1; j<n; j++) {

            int diffx = set[i].x - set[j].x;
            int diffy = set[i].y - set[j].y;

            ans = min(ans, diffx * diffx + diffy * diffy);

        }

    }

    cout << ans;
    return 0;
}
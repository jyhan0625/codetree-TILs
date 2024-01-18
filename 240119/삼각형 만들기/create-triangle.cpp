#include <iostream>
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

    for(int i=0; i<n; i++) {

        for(int j=i+1; j<n; j++) {

            for(int k=j+1; k<n; k++) {

                if (set[i].y != set[j].y && set[j].y != set[k].y && set[j].y != set[i].y) continue;
                if (set[i].x != set[j].x && set[j].x != set[k].x && set[j].x != set[i].x) continue;

                cout << abs((set[i].x * set[j].y + set[j].x * set[k].y + set[k].x * set[i].y)
                - (set[j].x * set[i].y + set[k].x * set[j].y + set[i].x * set[k].y));
                
                return 0;
            }

        }

    }

    cout << 0;

    return 0;
}
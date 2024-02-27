#include <iostream>
using namespace std;

class rectangle {

    public:
    int startx, starty, endx, endy;

    rectangle(int startx, int starty, int endx, int endy) {

        this->startx = startx;
        this->starty = starty;
        this->endx = endx;
        this->endy = endy;

    }
    rectangle(){}

};
int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    rectangle r1 = rectangle(a, b, c, d);

    cin >> a >> b >> c >> d;
    rectangle r2 = rectangle(a, b, c, d);

    if (r1.endx < r2.startx) cout << "nonoverlapping"; // 1. r1이 r2보다 왼쪽에 있는 경우
    else if (r2.endx < r1.startx) cout << "nonoverlapping"; // 2. r1이 r2보다 오른쪽에 있는 경우
    else if (r1.endy < r2.starty) cout << "nonoverlapping"; // 3. r1이 r2보다 아래에 있는 경우
    else if (r2.endy < r1.starty) cout << "nonoverlapping"; // 3. r1이 r2보다 위에 있는 경우
    else cout << "overlapping";
    return 0;
}
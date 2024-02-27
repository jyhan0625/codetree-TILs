#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int ax, ay, bx, by;
    cin >> ax >> ay >> bx >> by;

    if (ax <= bx && ay <= bx) cout << (ay - ax) + (by - bx);
    else if (ax <= bx && ay > bx) cout << (ay - ax) + (by - bx) - (ay - bx);
    else if (bx <= ax && by <= ax) cout << (ay - ax) + (by - bx);
    else if (bx <= ax && by > ax) cout << (ay - ax) + (by - bx) - (by - ax);

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b < c || d < a) cout << "nonintersecting";
    else cout << "intersecting";
    return 0;
}
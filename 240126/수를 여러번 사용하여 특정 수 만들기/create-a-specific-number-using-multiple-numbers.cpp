#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c;
    cin >> a >> b >> c;

    // a와 b의 조합 -> c보다 가장 가까운 최대로 작은 수 구하기

    int indexa = 0, indexb;


    int ans = 0;

    while(a * indexa <= c) {

        indexb = 0;

        while(b * indexb <= c) {

            if (a * indexa + b * indexb <= c) ans = max(ans, (a * indexa + b * indexb));

            indexb++;

        }



        indexa++;
    }

    cout << ans;

    return 0;
}
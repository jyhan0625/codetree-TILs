#include <iostream>
using namespace std;

int set[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, l;
    cin >> n >> l;
    for(int i=0; i<n; i++) cin >> set[i];

    int ans = 0;

    for(int i=0; i<=100; i++) { // H값 설정


        int cost  = 0, num = 0;

        for(int j=0; j<n; j++) {

            if (set[j] == i) num++; // H값이랑 같은 경우 -> cost 올릴 필요 x
            else if (set[j] - 1 == i) {

                cost++;
                num++;

            }

            // 현재 cost는 1점을 올리면 H점수가되는 수들의 개수

            if (cost <= l) num += cost;
            else num += l;

        }


        if (num >= i) ans = i;

    }
    cout << ans;


    return 0;
}
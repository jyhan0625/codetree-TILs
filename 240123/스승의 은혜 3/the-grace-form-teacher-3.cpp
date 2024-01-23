#include <iostream>
#include <algorithm>
using namespace std;

class present {

    public:
    
    int cost, del;

    present(int cost, int del) {

        this->cost = cost;
        this->del = del;

    }
    present() {}

};

bool cmp(present a, present b) {
    
    return (a.cost + a.del) < (b.cost + b.del);

}

present set[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, b;
    cin >> n >> b;

    for(int i=0; i<n; i++) {

        int cost, del;
        cin >> cost >> del;

        set[i] = present(cost, del);

    }

    int ans = 0;

    for(int i=0; i<n; i++) { // 반값 선택

        present temp[1000];
        for(int j=0; j<n; j++) temp[j] = present(set[j].cost, set[j].del);

        temp[i].cost /= 2;
        sort(temp, temp + n, cmp);

        int cnt = 0;

        for(int m = b, j = 0; m > 0; j++) {

            m -= temp[j].cost + temp[j].del;

            if (m>=0) cnt++;

        }

        ans = max(ans, cnt);

    }

    cout << ans;
    return 0;
}
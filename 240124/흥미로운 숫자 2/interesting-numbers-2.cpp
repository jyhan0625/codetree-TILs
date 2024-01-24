#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    cin >> x >> y;


    int ans = 0;
    for(int i=x; i<=y; i++) {

        int set[8] = {-1, -1, -1, -1, -1, -1, -1, -1};

        for(int j = i, k = 1; j>0; k++) {

            set[k] = j % 10;
            j /= 10;

        }

        int cnt[10] = {0};

        for(int j = 1; j<=7; j++) {

            if (set[j] == -1) continue;

            cnt[set[j]]++;
            

        }

        bool trig = false;
        int check = 0;

        for(int j=0; j<10; j++) {

            if (cnt[j] != 0) check++;
            if (cnt[j] == 1) trig = true;

        }

        if (trig && check == 2) ans++;

    }


    cout << ans;
    return 0;
}
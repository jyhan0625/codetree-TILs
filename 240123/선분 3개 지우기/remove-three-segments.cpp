#include <iostream>
using namespace std;

class line {

    public:
    int start, end;

    line(int start, int end) {

        this->start = start;
        this->end = end;

    }
    line(){}

};

line set[10];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        int start, end;
        cin >> start >> end;

        set[i] = line(start, end);

    }

    int ans = 0;
    for(int i=0; i<n; i++) {

        for(int j=i+1; j<n; j++) {

            for(int k=j+1; k<n; k++) { //배제할 3개의 선 선택

                int result[101] = {0};

                for(int s=0; s<n; s++) {

                    if (s == i || s == j || s == k) continue;

                    for(int m = set[s].start; m <= set[s].end; m++) result[m]++;

                }

                bool trig = true;

                for(int s = 0; s<101; s++) {

                    if (result[s] > 1) trig = false;

                }

                if (trig) ans++;

            }

        }

    }


    cout << ans;

    return 0;
}
#include <iostream>
using namespace std;

class line {

    public:

    int startpointx, endpointx;

    line(int a, int b) {

        this->startpointx = a;
        this->endpointx = b;

    }
    line(){}

};

line set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        int a, b;
        cin >> a >> b;

        set[i] = line(a, b);

    }

    int ans = 0;

    for(int i=0; i<n; i++) {
        
        bool trig = true;

        for(int j=0; j<n; j++) {

            if (i == j) continue;

            if (set[j].startpointx >= set[i].startpointx && set[j].endpointx <= set[i].endpointx) trig = false;
            else if (set[j].startpointx <= set[i].startpointx && set[j].endpointx >= set[i].endpointx) trig = false;



        }

        if (trig) ans++;

    }





    cout << ans;

    return 0;
}
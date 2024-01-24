#include <iostream>
using namespace std;

int n,c,g,h;

class device {

    public:
    int a, b;

    device(int a, int b) {

        this->a = a;
        this->b = b;

    }
    device(){}


};

int finder(int i, int a, int b) {

    if (i < a) return c;
    else if (i < b) return g;
    else return h;

}

device set[1000];

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n >> c >> g >> h;

    int mina = 0, maxb = 1000;
    for(int i=0; i<n; i++) {

        int a, b;
        cin >> a >> b;

        mina = min(a, mina);
        maxb = max(b, maxb);

        set[i] = device(a, b);

    }

    int ans = 0;

    for(int i=mina; i<=maxb; i++) { // 온도 찾기
        
        int sum = 0;
        for(int j=0; j<n; j++) {

            sum += finder(i, set[j].a, set[j].b);

        }

        ans = max(ans, sum);

    }



    cout << ans;

    return 0;
}
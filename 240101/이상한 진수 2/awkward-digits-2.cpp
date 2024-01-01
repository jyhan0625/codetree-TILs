#include <iostream>
#include <cmath>
using namespace std;

int set[10];

int main() {
    // 여기에 코드를 작성해주세요.

    int num;
    cin >> num;

    int len = 0;
    for(int i=num; i>0; i/=10) len++;

    int j = 0;
    for(int i = pow(10, len - 1); i>0; i /= 10) {

        int temp = num;
        set[j++] = temp/i;
        num = temp % i;

    }

    for(int i =0; i<len; i++) {

        if (set[i] == 0) {

            set[i] = 1;
            break;

        }

    }

    int ans = 0;
    for(int i=0; i<len; i++) {

        ans += set[i] * pow(2, len - 1 - i);

    }

    cout << ans;

    
    return 0;
}
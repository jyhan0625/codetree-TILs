#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    cin >> a >> b;

    int cnt = 0;

    for(int i=a; i<=b; i++) { //하나씩 확인 : i

        int tmp[8] = {0};
        int index = 1;

        int num = i;
        while(num) {

            tmp[index++] = num % 10;
            num /= 10;

        } 
        
        // 인덱스로 몇자리 수인지 확인 : index
        // 각 자리가 tmp에 들어가있음.

        bool trig = true;

        for(int j=1; j<=index/2; j++) {

            if (tmp[j] != tmp[index - j]) trig = false;

        }

        if (trig) cnt++;

    }

    cout << cnt;

    return 0;
}
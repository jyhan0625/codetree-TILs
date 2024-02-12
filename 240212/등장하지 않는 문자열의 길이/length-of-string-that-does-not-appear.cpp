#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    string sen;
    cin >> n >> sen;

    for(int i=1; i<n; i++) {

        bool trig = false;

        for(int j=0; j<n; j++) {

            if (j + i > n) break;

            string sub = sen.substr(j, i);
            int find = sen.find(sub, j+1);

            if (find > 0) trig = true;

        }
        
        if (trig == false) {

            cout << i;
            return 0;

        }

    }

    return 0;
}
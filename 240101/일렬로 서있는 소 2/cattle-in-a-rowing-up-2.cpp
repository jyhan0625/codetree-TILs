#include <iostream>
using namespace std;


int cow[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i=0; i<n; i++) cin >> cow[i];

    int count = 0;
    for(int i=0; i<n-2; i++) {

        for(int j=i + 1; j <n -1; j++) {

            for (int k= j + 1; k< n; k++) {

                if (cow[i] <= cow[j] && cow[j] <= cow[k]) count ++;

            }

        }

    }

    cout << count;

    return 0;
}
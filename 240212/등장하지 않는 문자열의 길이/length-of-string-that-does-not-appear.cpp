#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    string sen;
    cin >> n >> sen;

    for(int i=1; i<n; i++) {

        string sub = sen.substr(0, i);
        
        int find = sen.find(sub, i);

        if (find < 0) {

            cout << i;
            return 0;

        } 

    }


    return 0;
}
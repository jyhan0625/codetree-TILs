#include <iostream>
#include <string>

using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.

    string sen;
    cin >> sen;

    int len = sen.length();

    int sum = 0;
    for(int i=0; i<len - 1; i++) {

        if (sen[i] != '(') continue;

        for(int j= i + 1; j<len; j++) {

            if (sen[j] == ')') sum ++;
        
        }

    }

    cout << sum;
    return 0;
}
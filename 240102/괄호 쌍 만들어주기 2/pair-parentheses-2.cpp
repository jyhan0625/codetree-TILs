#include <iostream>
#include <string>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.

    string set;
    cin >> set;
    int len = set.length();

    int ans = 0;
    for(int i=0; i<len-1; i++) {

        if (set[i] == '(' && set[i+1] == '(') {

            for(int j=i+1; j<len- 1; j++) {

                if (set[j] == ')' && set[j + 1] == ')') ans++;

            }

        }

    }

    cout << ans;

    
    return 0;
}
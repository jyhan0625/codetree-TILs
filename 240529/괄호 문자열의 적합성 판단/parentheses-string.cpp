#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    stack <char> sen;

    string input;
    cin >> input;
    
    for(int i=0; i<input.length(); i++) {

        if (input[i] == '(') {

            sen.push(input[i]);

        }

        else if (input[i] == ')') {

            if (sen.empty() == true) {

                cout << "No";
                return 0;

            }

            else {

                sen.pop();

            }

        }

    }

    if (sen.empty() == false) cout << "No";
    else cout << "Yes";

    return 0;
}
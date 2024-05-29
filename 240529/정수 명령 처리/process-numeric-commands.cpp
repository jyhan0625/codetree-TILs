#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    stack <int> s;

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        string input;
        cin >> input;

        if (input == "push") {

            int num;
            cin >> num;

            s.push(num);

        }

        else if (input == "top") {

            cout << s.top() << endl;

        }

        else if (input == "size") {

            cout << s.size() << endl;

        }

        else if (input == "pop") {

            cout << s.top() << endl;
            s.pop();

        }

        else if (input == "empty") {

            cout << s.empty() << endl;

        }

    }

    return 0;
}
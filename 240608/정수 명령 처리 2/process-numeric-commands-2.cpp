#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    queue<int> q;

    for(int i=0; i<n; i++) {

        string order;
        cin >> order;

        if(order == "push") {

            int i;
            cin >> i;
            q.push(i);

        }

        else if (order == "front") {

            cout << q.front() << endl;

        }

        else if (order == "pop") {

            cout << q.front() << endl;
            q.pop();

        }

        else if (order == "size") {

            cout << q.size() << endl;

        }

        else if (order == "empty") {

            if (q.empty()) cout << 1 << endl;
            else cout << 0 << endl;

        }


    }

    return 0;
}
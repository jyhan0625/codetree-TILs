#include <iostream>
#include <list>
#include <string>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    list<int> l;

    int n;
    cin >> n;
    for(int i=0; i<n; i++) {

        string order;
        cin >> order;

        if(order == "push_front") {

            int input;
            cin >> input;
            l.push_front(input);

        }

        else if(order == "push_back") {

            int input;
            cin >> input;
            l.push_back(input);

        }

        else if(order == "pop_front") {

            cout << l.front() << endl;
            l.pop_front();

        }

        else if(order == "pop_back") {
            
            cout << l.back() << endl;
            l.pop_back();
        
        }
        
        else if(order == "size") cout << l.size() << endl;
        else if(order == "empty") cout << l.empty() << endl;
        else if(order == "front") cout << l.front() << endl;
        else if(order == "back") cout << l.back() << endl;


    }
    return 0;
}
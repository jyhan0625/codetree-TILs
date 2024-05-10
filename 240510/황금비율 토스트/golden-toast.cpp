#include <iostream>
#include <list>
#include <string>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.

    list<char>bread;
    list<char>::iterator it;

    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++) {

        char c;
        cin >> c;
        bread.push_back(c);

    }

    it = bread.end();

    for(int i=0; i<m; i++) {

        char order;
        cin >> order;

        if(order == 'L') {

            if(it != bread.begin()) it--;

        }

        else if(order == 'R') {

            if(it != bread.end()) { 
                it++;
            }

        }

        else if(order == 'P') {

            char input;
            cin >> input;
            bread.insert(it, input);

        }

        else if(order == 'D') {

            if(it != bread.end()) it = bread.erase(it);

        }

    }

    for(it=bread.begin(); it != bread.end(); it++) {

        cout << *it;

    }


    return 0;
}
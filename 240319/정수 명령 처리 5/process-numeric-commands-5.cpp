#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v;

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        string input;
        cin >> input;

        if(input == "push_back") {

            int a;
            cin >> a;
            v.push_back(a);

        }

        else if(input == "pop_back") {

            v.pop_back();

        }

        else if(input == "size") {

            cout << v.size() << endl;

        }

        else if(input == "get") {

            int a;
            cin >> a;

            cout << v[a-1] << endl;

        }


    }
    return 0;
}
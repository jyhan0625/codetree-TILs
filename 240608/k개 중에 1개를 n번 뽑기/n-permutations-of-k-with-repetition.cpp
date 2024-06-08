#include <iostream>
#include <vector>
using namespace std;

int k, n;

vector<int>set;

void num(int cur) {

    if (cur == n+1) {

        for(int i=0; i<set.size(); i++) {

            cout << set[i] << " ";

        }

        cout << endl;
        return;

    }

    for(int i=1; i<=k; i++) {

        set.push_back(i);
        num(cur+1);
        set.pop_back();

    }

}


int main() {
    // 여기에 코드를 작성해주세요.

    cin >> k >> n;

    num(1);





    return 0;
}
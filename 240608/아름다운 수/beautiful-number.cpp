#include <iostream>
#include <vector>
using namespace std;


int n, sum;
vector<int> set;

void beauty(int cur) {

    if(set.size() == n) {

        sum++;

        return;

    }

    else if(set.size() >= n+1) {
        
        return;

    }

    for(int i=1; i<=4; i++) {

        for(int j=0; j<i; j++) {

            set.push_back(j);

        }
        beauty(i);
        for(int j=0; j<i; j++) {

            set.pop_back();

        }

    }






}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    beauty(0);

    cout << sum;
    return 0;
}
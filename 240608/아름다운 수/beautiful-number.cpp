#include <iostream>
#include <vector>
using namespace std;


int n, sum;
vector<int> set;

void beauty(int cur) {

    if(cur == n) {

        sum++;
        for(int i=0; i<set.size(); i++) {

            set.pop_back();

        }

        return;

    }

    else if(cur >= n+1) {
        
        for(int i=0; i<set.size(); i++) set.pop_back();
        return;

    }

    for(int i=1; i<=4; i++) {

        for(int j=0; j<i; j++) {

            set.push_back(j);

        }
        beauty(set.size());
        for(int j=0; j<i; j++) {

            set.pop_back();

        }

    }






}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    beauty(n);

    cout << sum;
    return 0;
}
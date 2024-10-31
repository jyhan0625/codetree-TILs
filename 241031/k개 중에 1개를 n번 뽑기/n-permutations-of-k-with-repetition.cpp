#include <iostream>
#include <vector>
using namespace std;

vector<int>a;
int k;
void al(int n) {
    if (n == 0) {
        for(int i=0; i<(int)a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i=1; i<=k;i++) {
        a.push_back(i);
        al(n-1);
        a.pop_back();
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> k >> n;
    al(n);

    return 0;
}
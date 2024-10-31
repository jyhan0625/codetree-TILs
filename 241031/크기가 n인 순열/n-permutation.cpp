#include <iostream>
#include <vector>
using namespace std;

bool set[10];
vector<int> a;
int n;
void al(int cnt) {
    if (cnt == 0) {
        for(int i=0; i<(int)a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i=1; i<=n; i++) {
        if(set[i]) continue;
        set[i] = true;
        a.push_back(i);
        al(cnt-1);
        a.pop_back();
        set[i] = false;
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    al(n);
    return 0;
}
#include <iostream>
using namespace std;

int a[100], b[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    int ans = 0;
    for(int i=0; i<=n-m; i++) {

        bool trig = true;
        for(int j=i; j<i+m; j++) {

            for(int k=0; k<m; k++) {

                if (a[j] == b[k]) break;

                if (k == m-1) trig = false;

            }

        }

        if (trig) ans++;

    }

    cout << ans;

    return 0;
}
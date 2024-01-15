#include <iostream>
#include <algorithm>
using namespace std;

int set[100];
int standard[100];

int main() {

    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++) cin >> set[i];
    for(int i=0; i<m; i++) cin >> standard[i];
    sort(standard, standard + m);

    int ans = 0;

    for(int i=0; i<=n-m; i++) {

        int cmp[100];

        for(int j=i; j< i + m; j++) {

            cmp[j] = set[j];

        }

        sort(cmp + i, cmp + i + m);

        for(int j = 0; j<m; j++) {

            if (cmp[i + j] != standard[j]) break;

            if (j == m-1) ans++;
        }

    }

    cout << ans;

}
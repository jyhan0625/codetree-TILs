#include <iostream>
using namespace std;

int spc[100][100];
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    if (m == 1) {
        cout << 2 * m;
        return 0;
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) cin >> spc[i][j];
    }

    int cnt = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(spc[i][j] == spc[i][j+1]) {
                cnt++;
                break;
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(spc[j][i] == spc[j+1][i]) {
                cnt++;
                break;
            }
        }
    }

    cout << cnt;

    
    return 0;
}
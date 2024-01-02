#include <iostream>
#include <string>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string set; 
    cin >> n >> set;

    int ans = 0;
    for(int i=0; i<n; i++) {

        for(int j=i+1; j<n; j++) {

            for(int k=j+1; k<n; k++) {

                if (set[i] == 'C' && set[j] == 'O' && set[k] == 'W') ans++;

            }
 
        }

    }

    cout << ans;

    return 0;
}
#include <iostream>
using namespace std;
#define MAXR 1000000


/*

a가 선두 : 1
b가 선두 : 2
a, b 동시 : 3

*/

int a[MAXR + 1], b[MAXR + 1], c[MAXR + 1];


int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;


    int time = 1;

    for(int i=0; i<n; i++) {

        int v, t;
        cin >> v >> t;

        for(int i=0; i<t; i++) {

            a[time] = a[time - 1] + v;
            time++;

        }

    }

    time = 1;

    for(int i=0; i<m; i++) {

        int v, t;
        cin >> v >> t;

        for(int i=0; i<t; i++) {

            b[time] = b[time - 1] + v;
            time++;

        }

    }

    for(int i=0; i<time; i++) {

        if (a[i] > b[i]) c[i] = 1;
        else if (a[i] == b[i]) c[i] = 3;
        else c[i] = 2;

    }


    int cnt = 0;

    for(int i=1; i<time; i++) {

        if (i != 0 && c[i] != c[i - 1]) cnt++;

        //cout << "\t" << i  << ") " << c[i] << endl;

    }

    cout << cnt;


    return 0;
}
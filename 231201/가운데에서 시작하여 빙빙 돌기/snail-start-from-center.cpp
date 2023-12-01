#include <iostream>
using namespace std;
#define MAXN 100

int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
int set[MAXN][MAXN];
 
int main() {

    int n;
    cin >> n;

    int x = n / 2, y = n / 2, rot = 0, count = 1;
    int size = n;
    n = n * n;


    set[x][y] = count++;

    int f = 1;
    while(true) {

        for(int i=0; i<2; i++) {

            for(int j=0; j<f; j++) {
                
                if (n == 0) break;

                x += dx[rot];
                y += dy[rot];
                set[x][y] = count++;
                n--;

            }

            if (n==0) break;

            rot = (rot + 3) % 4;

        }

        if (n==0) break;
        f++;

    }


    for(int i=0; i<size; i++) {

        for(int j = 0; j<size; j++) cout << set[i][j] << " ";
        cout << endl;
    }

    




}
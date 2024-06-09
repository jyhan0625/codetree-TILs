#include <iostream>
using namespace std;

int set[20][20];
int amount, n, ans;

class target {

    public:

    int x, y;

    target(int x, int y) {

        this->x = x;
        this->y = y;

    }
    target(){}



};

target t[400];

void tile(int i, int cur) {

    int x = t[cur].x;
    int y = t[cur].y;

    if (i == 1) {

        for(int i=x-2; i<=x+2; i++) {

            if (i >= 0 && i < n) set[i][y]++;

        }

    }

    else if (i == 2) {

        for(int i=x-1; i<=x+1; i++) {

            if (i >= 0 && i < n) set[i][y]++;

        }

        for(int i=y-1; i<=y+1; i++) {

            if (i >= 0 && i < n) set[x][i]++;

        }

        set[x][y]--;

    }  

    else if (i == 3) {

        for(int i=x+1; i<=x-1; i-=2) {

            for(int j = y -1; j<=y+1; j+=2) {

                if (i >= 0 && i < n && j >= 0 && j < n) set[i][j]++;
                    
            }

        }

        for(int i=x-1; i<=x+1; i+=2) {

            for(int j = y -1; j<=y+1; j+=2) {

                if (i >= 0 && i < n && j >= 0 && j < n) set[i][j]++;
                    
            }

        }
    
    }

}

void detile(int i, int cur) {

    int x = t[cur].x;
    int y = t[cur].y;

    if (i == 1) {

        for(int i=x-2; i<=x+2; i++) {

            if (i >= 0 && i < n) set[i][y]--;

        }

    }

    else if (i == 2) {

        for(int i=x-1; i<=x+1; i++) {

            if (i >= 0 && i < n) set[i][y]--;

        }

        for(int i=y-1; i<=y+1; i++) {

            if (i >= 0 && i < n) set[x][i]--;

        }

        set[x][y]++;

    }

    else if (i == 3) {

        for(int i=x+1; i<=x-1; i-=2) {

            for(int j = y -1; j<=y+1; j+=2) {

                if (i >= 0 && i < n && j >= 0 && j < n) set[i][j]--;
                    
            }

        }

        for(int i=x-1; i<=x+1; i+=2) {

            for(int j = y -1; j<=y+1; j+=2) {

                if (i >= 0 && i < n && j >= 0 && j < n) set[i][j]--;
                    
            }

        }
    }
}



void bomb(int cur) {

    if (cur == amount) {

        int sum = 0;

        for(int i=0; i<n; i++) {

            for(int j=0; j<n; j++) {

                if (set[i][j] != 0) sum += 1;
                
            }

        }

        ans = max(sum, ans);

        return;

    }

    for(int i=1; i<=3; i++) {

        tile(i, cur);
        bomb(cur+1);
        detile(i, cur);

    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i=0; i<n; i++) {

        for(int j=0; j<n; j++) {
            
            cin >> set[i][j];

            if (set[i][j] == 1) {
                
                t[amount] = target(i, j);
                amount++;

            }


        }
    }

    bomb(0);
    cout << ans;
    return 0;
}
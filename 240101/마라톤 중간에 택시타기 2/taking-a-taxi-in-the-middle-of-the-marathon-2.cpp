#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

class point {

    public:

    int x;
    int y;

    point(int nx, int ny) {

        this->x = nx;
        this->y = ny;

    };
    point(){};


};

point set[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        int nx, ny;
        cin >> nx >> ny;

        set[i] = point(nx, ny);

    }

    int mindist = INT_MAX;

    for(int i=1; i<n-1; i++) {


        int dist = 0;
        for(int j=0; j<n-1; j++) {

            if (j == i -1) {

                dist += abs(set[j].x - set[j + 2].x) + abs(set[j].y - set[j + 2].y);

            }

            else if (j == i) continue;

            else {

                dist += abs(set[j].x - set[j+1].x) + abs(set[j].y - set[j+1].y);

            }

        }

        mindist = min(dist, mindist);

    }

    cout << mindist;

    
    return 0;
}
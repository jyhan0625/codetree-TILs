#include <iostream>
using namespace std;

class point {

    public:
    int x, y;

    point(int x, int y) {

        this->x = x;
        this->y = y;

    }
    point(){}

};

point set[20];

double get(int a, int b) {

    if (set[a].x == set[b].x) return 0;
    else return (set[a].y - set[b].y) / (set[a].x - set[b].x);

}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        int x, y;
        cin >> x >> y;
        set[i] = point(x, y);

    }

    //순차적으로 점을 6개를 골라서(중복도 가능) 기울기 3개를 구하고 이를 다른 점과 모두 겹치는지 확인한다.

    for(int i=0; i<n; i++) {

        for(int j=i+1; j<n; j++) { // i와 j 점 두 개 (첫 번째 기울기)

            for(int k=0; k<n; k++) {

                for(int l=k+1; l<n; l++) { // k와 l 점 두 개 (두 번째 기울기)

                    for(int q=0; q<n; q++) {

                        for(int p=q+1; p<n; p++) { // q와 p 점 두 개 (세 번째 기울기)

                            double first = get(i, j);
                            double second = get(k, l);
                            double third = get(q, p);

                            // 기준 점인 i, k, q을 제외한 모든 점과 비교하여 기울기가 동일한지 판단. 
                            //셋 중에 그 하나라도 맞지 않는 기울기라면, 바로 break처리.

                            bool trig = true;
                            for(int m=0; m<n; m++) {

                                if (m == i || m == k || m == q) continue;

                                if (get(m, i) != first && get(m, k) != second && get(m, q) != third) {

                                    trig = false;
                                    break;

                                }

                            }

                            if (trig) {
                                cout << 1;
                                return 0;
                            }

                        }

                    }

                }

            }

        }

    }

    cout << 0;
    

    return 0;
}
#include <iostream>
using namespace std;

class input {

    public:

    int num, cor, inc;
    
    input(int num, int cor, int inc) {

        this->num = num;
        this->cor = cor;
        this->inc = inc;

    }
    input(){}

};

input set[10];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {

        int num, cor, inc;
        cin >> num >> cor >> inc;

        set[i] = input(num, cor, inc);

    }

    int cnt = 0;

    for(int i=1; i<=9; i++) {

        for(int j=1; j<=9; j++) {

            for(int k=1; k<=9; k++) {

                for(int s=0; s<n; s++) {
                    
                    int cor = 0;
                    int inc = 0;

                    int first = set[s].num / 100;
                    int second = (set[s].num / 10) % 10;
                    int third = set[s].num % 10;

                    if (i == first) cor++;
                    else if (i == second || i == third) inc++;
                    if (j == second) cor++;
                    else if (j == first || j == third) inc++;
                    if (k == third) cor++;
                    else if (k == first || k == second) inc++;

                    if (cor != set[s].cor || inc != set[s].inc) break;
                    if (s == n-1) cnt++;  



                }

            }

        }

    }

    cout <<cnt;

    return 0;
}
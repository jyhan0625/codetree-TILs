#include <iostream>
#include <algorithm>
using namespace std;

int set[15];

int main() {
    // 여기에 코드를 작성해주세요.

    for(int i=0; i<15; i++) cin >> set[i];
    sort(set, set + 15);

    for(int i=0; i<15; i++) {

        for(int j=i+1; j<15; j++) {

            for(int k=j+1; k<15; k++) {

                for(int l=k+1; l<15; l++) {

                    int abcd[4] = {set[i], set[j], set[k], set[l]};
                    sort(abcd, abcd + 4);
                    int a = abcd[0], b = abcd[1], c = abcd[2], d = abcd[3];

                    int quest[15] = {a, b, c, d, a+b, b+c, c+d, d+a, a+c, b+d, a+b+c, a+b+d, a+c+d, b+c+d, a+b+c+d};
                    sort(quest, quest + 15);

                    bool trig = true;

                    for(int i=0; i<15; i++) {

                        if (set[i] != quest[i]) {

                            trig = false;
                            break;

                        }

                    }

                    if (trig) {

                        cout << a << " " << b << " " << c << " " << d;
                        return 0;

                    }                    

                }

            }

        }

    }


    return 0;
}
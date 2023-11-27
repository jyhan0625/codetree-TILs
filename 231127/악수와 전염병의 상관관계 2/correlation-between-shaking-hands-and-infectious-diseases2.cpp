#include <iostream>
using namespace std;
#define MAXN 100
#define MAXt 250

int people_ill[MAXN + 1]; // 0은 음성
int people_K[MAXN + 1] = {0};
int handshake_x[MAXt]; // x로 들어오는 악수자
int handshake_y[MAXt]; // y로 들어오는 악수자

int main() {
    // 여기에 코드를 작성해주세요.

/*

N : 사람 수
K : 악수 전염효과 횟수
P : 최초 전염자 번호
T : 반복 횟수

x : x악수자
y : y악수자
t : x와 y가 악수하는 시간

*/


    int N, K, P, T;
    cin >> N >> K >> P >> T;

    people_ill[P] = 1;

    for(int i=0; i<T; i++) {

        int t, x, y;
        cin >> t >> x >> y;

        handshake_x[t] = x;
        handshake_y[t] = y;
        people_K[x] = K;
        people_K[y] = K;

    }

    for(int i=0; i<250; i++) {

        if (handshake_x[i] && handshake_y[i]) {

            if (people_ill[handshake_x[i]] == 1 && people_ill[handshake_y[i]] == 1) {

                people_K[handshake_x[i]] --;
                people_K[handshake_y[i]] --;

            }

            else if (people_ill[handshake_x[i]] == 1 && people_ill[handshake_y[i]] != 1) {

                if (people_K[handshake_x[i]]) {

                    people_ill[handshake_y[i]] = 1;
                    people_K[handshake_x[i]] --;

                }

            }

            else if (people_ill[handshake_x[i]] != 1 && people_ill[handshake_y[i]] == 1) {

                if (people_K[handshake_y[i]]) {

                    people_ill[handshake_x[i]] = 1;
                    people_K[handshake_y[i]] --;

                }

            }

        }

    }

    for(int i=1; i<=N; i++) cout << people_ill[i];


    return 0;
}
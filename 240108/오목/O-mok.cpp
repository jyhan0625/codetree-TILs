#include <iostream>
using namespace std;

int set[19][19];
// 검은색 1, 흰색 2, 아직 없으면 0


int main() {
    // 여기에 코드를 작성해주세요.

    for(int i=0; i<19; i++) for(int j=0; j<19; j++) cin >> set[i][j];

    for(int i=0; i<19; i++) {

        for(int j=0; j<19; j++) {

            // 1. 세로로 어떤지 확인한다.

            if (i>=2 && i <= 16) {

                for(int k=i-2; k<i+3; k++) {

                    if (set[k][j] != set[i][j]) break;

                        if (k==i + 2) {

                            if (set[i][j] != 0) {
                            cout << set[i][j] << endl;
                            cout << i+1 << " " << j+1 << endl;
                            return 0;
                            }

                        }

                }

            }
            

            //2. 가로로 어떤지 확인한다.

            if (j>=2 && j <= 16) {
                for(int k=j-2; k<j+3; k++) {
                    
                    if (set[i][k] != set[i][j]) break;
                    
                    if (k==j + 2) {
                        
                        if (set[i][j] != 0) {

                            cout << set[i][j] << endl;
                            cout << i+1 << " " << j+1 << endl;
                            return 0;

                        }

                    }

                }
            
            }

            //3. 하향 대각으로 어떤지 확인한다.

            if (i>=2 && i <=16 && j>=2 && j<=16) {

                for(int k=0; k<5; k++) {

                    if (set[i - 2 + k][j - 2 + k] != set[i][j]) break;

                    if (k == 4) {

                        if (set[i][j] != 0) {
                        

                            cout << set[i][j] << endl;
                            cout << i+1 << " " << j+1 << endl;
                            return 0;

                        }

                    }

                }

            }

            //4. 상향 대각으로 어떤지 확인한다.

            if (i>=2 && i <=16 && j>=2 && j<=16)  {

                for(int k=0; k<5; k++) {

                    if (set[i - 2 + k][j + 2 - k] != set[i][j]) break;

                    if (k == 4) {

                        if (set[i][j] != 0) {

                            cout << set[i][j] << endl;
                            cout << i+1 << " " << j+1 << endl;
                            return 0;

                        }

                    }

                }

            }


        }

    }

    cout << 0;
    return 0;
}
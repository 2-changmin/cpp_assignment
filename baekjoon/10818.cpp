#include <iostream>
using namespace std;
int main(){
    int N,a;
    cin >> N;
    int max = -1000000;
    int min = 1000000;
    for(int i = 0; i < N; i++){
        cin >> a;
        if(a > max) max = a;
        if(a < min) min = a;
    }
    cout << min << " " << max;

    return 0;
}
// 주어지는 값의 최대값과 최소값을 구하는 코드

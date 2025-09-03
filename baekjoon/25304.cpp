#include <iostream>
using namespace std;
int main(){
    int X,N;
    int a,b;
    cin >> X >> N;
    int sum = 0;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        sum += a*b;
    }
    if(sum == X) cout << "Yes";
    else cout << "No";

    return 0;
}
//영수증에 적힌 총 가격과 물건의 가격과 개수를 이용해 두 개가 같은지 확인하는 코드

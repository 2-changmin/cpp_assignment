#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin >> a;
    int x = size(a);
    int result = 1;
    for(int i = 0; i < size(a)/2;i++){
        if(a[i] == a[x-1]){
            x -= 1;
        }
        else{
            result = 0;
            break;
        }
    }
    cout << result;

    return 0;
}
//팰린드롬 수인지 확인하는 코드이며 문자열 길이를 구하는 size를 이용해서 문제를 풀어냄

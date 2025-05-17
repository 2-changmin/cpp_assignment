#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main(){
    char ch;
    int count_alpha = 0, count_digit = 0, count_alnum = 0;
    cout << "자유롭게 작성" << endl;
    while(cin >> noskipws >> ch){
        if(isalpha(ch)) count_alpha++;
        if(isdigit(ch)) count_digit++;
        if(isalnum(ch)) count_alnum++;
        cout << (char)toupper(ch);
    }
    cout << count_alpha << endl;
    cout << count_digit << endl;
    cout << count_alnum << endl;\
    return 0;
}
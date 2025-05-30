#include <iostream>
#include <string>

using namespace std;
int main(){
    string question[] = { "개", "고양이", "기린", "코끼리","표범"};
    string answer[] = {"dog","cat","giraffe","elephant","leopard"};
    string ox = "";
    int score(0);

    cout << "영단어로 바꾸세요." << endl;
    
    for(int i = 0; i < 5; i++){
        string word;
        cout << question[i] << ": ";
        getline(cin,word);
        if(word == answer[i]){
            score += 20;
            ox += 'O';
        }
        else{
            ox += 'X';
        }
    }
    cout << "==> " << ox << " " << score << " 점" << endl;
    return 0;
}

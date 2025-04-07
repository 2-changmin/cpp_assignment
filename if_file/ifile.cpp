#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream fin("triangle.txt");
    ofstream fout("triangle_result.txt");
    if(!fin){cerr << "Error opening triangle.txt"; return -1;}
    if(!fout){cerr << "Error opening triangle_result.txt"; return -1;}
    int num, a, b, c;
    while(fin >> num >> a >> b >> c){
        if(a + b < c || a + c < b || b + c < a)
            fout << num << " X" << endl;
        else if(a == b && b == c)
            fout << num << " O 정삼각형" << endl;
        else if(a == b || a == c || b == c)
            fout << num << " O 이등변삼각형" << endl;
        else
            fout << num << " O" << endl;
    }
    cout << "완료. 출력파일을 확인해보세요." << endl;
    fin.close();
    fout.close();
    
    return 0;
}


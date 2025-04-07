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
            fout << num << " O ���ﰢ��" << endl;
        else if(a == b || a == c || b == c)
            fout << num << " O �̵�ﰢ��" << endl;
        else
            fout << num << " O" << endl;
    }
    cout << "�Ϸ�. ��������� Ȯ���غ�����." << endl;
    fin.close();
    fout.close();
    
    return 0;
}


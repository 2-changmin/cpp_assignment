#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string name;
public:
    Person(string name);
    ~Person(){
        cout << "name destroyed";
    }
    string getName() const;
    void setName(string name1);
    
};
string Person::getName() const{
    return name;
}

Person::Person(string name) : name(name){} 

void Person::setName(string name1){
    if(name1.empty() || name.empty()) return;
    string oldname = name.substr(0,3);
    string newname = name1.substr(0,3);
    if(oldname == newname){
        name = name1;
        cout << name << "(��)�� ���� �Ϸ�" << endl;
    }
    else{
        cout << "Family name change not allowed" << endl;
    }
    
}

int main(){
    Person person("��浿");
    cout << "���� �̸�: " + person.getName() << endl;
    person.setName("���");
    person.setName("����");
    person.setName("�ڱ浿");
    cout << "���� �̸�: " + person.getName() << endl;

    return 0;
}
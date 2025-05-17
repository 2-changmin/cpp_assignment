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
        cout << name << "(으)로 변경 완료" << endl;
    }
    else{
        cout << "Family name change not allowed" << endl;
    }
    
}

int main(){
    Person person("고길동");
    cout << "원래 이름: " + person.getName() << endl;
    person.setName("곡식");
    person.setName("고구마");
    person.setName("박길동");
    cout << "최종 이름: " + person.getName() << endl;

    return 0;
}
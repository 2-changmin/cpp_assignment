#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cassert>
using namespace std;
/* 클래스 정의 : 데이터 멤버 1개, 생성자 3종류, 소멸자, 멤버 함수 4개 */
class Circle
{
private:
double radius;
public:
Circle(double radius); // 파라미터 생성자
Circle(); // 기본 생성자
Circle(const Circle& circle); // 복사 생성자
~Circle(); // 소멸자
void setRadius(double radius); // set
double getRadius() const; // get
double getArea() const; // "
double getPerimeter() const; // "
};

#endif

#include <iostream>

using namespace std;

// 基类
class Shape
{
public:
	void setWidth(int width){
		this->width = width;
	}

	void setHeight(int height){
		this->height = height;
	}
	Shape(){}
	~Shape(){}
protected:
	int width;
	int height;
};


// 派生类
class Rectangle:public Shape
{
public:
	Rectangle(){}
	~Rectangle(){}

	int getArea(){
		return width*height;
	}
};

class Circle
{
public:
	Circle(){}
	~Circle(){}
	// 如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。纯虚函数是通过在声明中使用 "= 0" 来指定的
	// 类似java的抽象类
	virtual void printCircle() = 0;
	
};

int main(){

	Rectangle rect;
	rect.setWidth(100);
	rect.setHeight(20);
	cout<<"area: "<<rect.getArea()<<endl;

	return 0;
}
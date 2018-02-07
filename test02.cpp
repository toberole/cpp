#include <iostream>

using namespace std;

class Box{
public:
	static int ib;

	static int getIb(){
		return ib;
	}

};

// 初始化Box的静态变量
int Box::ib = 100;

class Line
{
public:
	int getLength();
	Line(int len);// 简单的构造函数
	Line(const Line &obj);// 拷贝构造函数
	~Line();

	// 友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元。
	// friend 友元函数
	friend void printLength(Line line);

	// Box作为该类的友元 Box里面的成员即为该类的友元
	// friend class Box;

private:
	int *ptr;
};

Line::Line(int len){
	// // 为指针分配内存
	ptr = new int;
	*ptr = len;
}

// 类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数。
Line::Line(const Line &obj){
	ptr = new int;
	*ptr = *obj.ptr;
}

Line::~Line(){

}

Line::getLength(){
	return *ptr;
}

// 注意友元函数实现 友元函数不属于任何类的成员
void printLength(Line line){
	cout<<"printLength length: "<<*(line.ptr)<<endl;
}


int main(){

	Line line = Line(200);

	// cout<<"length: "<<line.getLength()<<endl;
	printLength(line);

	Box box;
	cout<<"ib: "<<box.ib<<endl;
	cout<<"ib: "<<Box::getIb()<<endl;
	return 0;
}
#include <iostream>

using namespace std;

// 使用 typedef 为一个已有的类型取一个新的名字
typedef int _int;

/*
	枚举：
	enum enum_name { list of names } var_list

	定义枚举类型变量：
　　[enum] 枚举名 枚举变量名 [=初始化值]；
*/

// 定义一个颜色枚举
enum color
{
	red,
	green,
	blue
	
} color_enum;// 直接定义枚举变量color_enum

/*
	extern 关键字在任何地方声明一个变量
	
	注意： 声明 和 定义 不是一个概念
*/

// 声明 fi变量
extern float fi;

// 声明函数
int func();

int main()
{
	cout << "hello world"<<endl;
	cout<<"size of char: "<< sizeof(char)<<endl;

	_int i = 10;
	cout<<"_int: "<<i<<endl;

	color color_ = blue;
	cout<< color_ << endl;
	cout<< color_enum << endl;

	cout<< "func: "<<func()<<endl;


	
	return 0;
}

// 定义前面声明的func函数
int func(){
	return 100;
}
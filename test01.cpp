#include <iostream>// 	该文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
#include <string> // C++ 标准库提供了 string 类类型
#include <ctime> // C的时间日期处理模块
#include <cstring>

/*

	I/O 库头文件
	iostream:
		该文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。

	iomanip:
		该文件通过所谓的参数化的流操纵器（比如 setw 和 setprecision），来声明对执行标准化 I/O 有用的服务。

	fstream:
		该文件为用户控制的文件处理声明服务。

*/


/*

时间相关的类型：clock_t、time_t、size_t 和 tm。
类型 clock_t、size_t 和 time_t 能够把系统时间和日期表示为某种整数

*/

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

// 结构
struct Book
{
	char name[20];
	int price;
};


// 为结构取一个别名
typedef struct
{
	char name[20];
	int price;
}stu;// 给结构取个stu的别名

// 类定义
class Box
{
public:
	Box(){
		cout<<"Box()"<<endl;
	}
	~Box(){
		cout<<"~Box()"<<endl;
	}
public:
	int height;
	int width;

	// 内联的
	int getVolume1()
	{
	   return height*width;
	}
	int getVolume();// 成员函数可以定义在类定义内部，或者单独使用范围解析运算符 :: 来定义。在类定义中定义的成员函数把函数声明为内联的，即便没有使用 inline 标识符。
};

// 使用范围解析运算符 :: 定义getVolume函数
int Box::getVolume(){
	return height*width;
}

class Test
{
public:
	int i;
	Test(int num);
	~Test(){

	}
	
};

Test::Test(int num):i(num){
	cout<<"Test()"<<endl;
}




/*
	extern 关键字在任何地方声明一个变量
	
	注意： 声明 和 定义 不是一个概念
*/

// 声明 fi变量
extern float fi;

// 声明函数
int func();

// 声明全局变量
// 全局变量的值在程序的整个生命周期内都是有效的。
// 全局变量可以被任何函数访问。也就是说，全局变量一旦声明，
// 在整个程序中都是可用的
int g_num = 20;
// 局部变量和全局变量的名称可以相同，但是在函数内，局部变量的值会覆盖全局变量的值。


// 使用#define 预处理器定义常量的形式
# define WIDTH 5

// const 关键字定义常量
const int HEIGHT = 10;

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


	cout<< WIDTH<<endl;

	cout<< HEIGHT<<endl;

	cout<< max(5,3)<<endl;

	int arr[10];
	for (int i = 0; i <10; ++i)
	{
		arr[i] = i+1;
	}

	for(int i = 0;i<10;i++){
		cout<< "arr[i]: "<<arr[i]<<endl;
	}

	// C风格的字符串 末尾会自动加上一个 "\0" ,所以长度是6
	char arrs[6] = "hello";

	// C++风格字符串
	string cppStr = "hello ";
	string cppStr1 = "world";
	cout<< cppStr<<endl<<cppStr1<<endl;
	cout<< cppStr+cppStr1<<endl;
	cout<< cppStr.size();

	cout<<"指针变量的地址："<<endl;
	int num = 0;
	// 为指针变量赋一个 NULL 值
	int *numP = NULL;

	// 给指针变量赋值为变量num的地址
	numP = &num;
	if(numP){
		cout<<"numP is not NULL"<<endl;
	}else{
		cout<<"numP is NULL"<<endl;
	}
	cout<<numP<<endl;


	// 预定义的对象 cout 是 ostream 类的一个实例。cout 对象"连接"到标准输出设备，通常是显示屏
	// 预定义的对象 cin 是 istream 类的一个实例。cin 对象附属到标准输入设备，通常是键盘
	// char name[50];
	// cout << "input your name"<<endl;
	// cin >> name;
	// cout << "you input name is "<< name<<endl;

	cout<<"== struct =="<<endl;
	Book book;
	strcpy(book.name , "android dev");
	// book.name = "android dev";
	book.price = 1.0f;

	cout<<"Book name:"<<book.name<<" Book price: "<<book.price<<endl;


	cout<<"== class =="<<endl;
	Box box;
	box.height = 100;
	box.width = 200;
	cout<<"Box height: "<<box.height<<" width: "<<box.width<<" getVolume "<<box.getVolume()<<endl;

	// 有构造函数
	Test test =  Test(11);
	return 0;
}

// 定义前面声明的func函数
int func(){
	return 100;
}


int max(int a,int b){
	return a>b?a:b;
}
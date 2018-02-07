#include <iostream>
#include <fstream>//  C++ 中进行文件处理，必须在 C++ 源代码文件中包含头文件 <iostream> 和 <fstream>

using namespace std;


class Student
{
public:
	Student(){
		cout<<"Student()"<<endl;
	}
	~Student(){
		cout<<"~Student()"<<endl;
	}
	
};

/*
	文件操作模式：
		ios::app 	追加模式。所有写入都追加到文件末尾。
		ios::ate 	文件打开后定位到文件末尾。
		ios::in 	打开文件用于读取。
		ios::out 	打开文件用于写入。
		ios::trunc 	如果该文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为 0。
*/

int main(int argc, char const *argv[])
{
	char data[1024];

	// 以写模式代开文件
	ofstream outFile;
	outFile.open("data.dat");

	cout<<"请输入你要写入文件的数据"<<endl;
	cin.getline(data,1024);

	// 向文件写入数据
	outFile<<data<<endl;
	outFile.close();

	// 从文件读入数据
	ifstream infile;
	infile.open("data.dat");
	infile >> data;
	cout<<"file data "<<data<<endl;
	infile.close();

	// c++里面建议使用new动态分配内存
	// new -- delete
	// malloc -- free
	// new 不仅会分配内存 还会创建对象
	int *p = new int;
	*p = 1024;
	cout<<*p<<endl;
	// 删除内存
	delete p;

	// 数组分配内存
	int *arrP = new int[100];
	arrP[0] = 213;
	cout<<arrP[0]<<endl;
	// 删除内存
	delete []arrP;

	// 对象的动态内存分配 会触发对象的构造函数被执行 3 次
	// new 的时候不仅会动态的分内内存 还会创建对象 注意与malloc的区别
	Student *stus = new Student[3];
	delete []stus; 
	
	return 0;
}



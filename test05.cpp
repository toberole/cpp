#include <iostream>
#include <string>

using namespace std;

// 模版
/*
	可以使用模板定义函数和类 

	函数模板
	模板函数定义的一般形式如下所示：
	template <class type> ret-type func-name(parameter list)
	{
	   // 函数的主体
	}  

	在这里，type 是函数所使用的数据类型的占位符名称。这个名称可以在函数定义中使用。
*/

// 模版函数
template <typename T>
inline T const& Max(T const& a, T const& b){
	return a < b ? b:a;
}

// 模版类
/*

	template <class type> class class-name {

	}
	
*/

int main(int argc, char const *argv[])
{
	
	int i = 20;
	int j = 30;

	cout << "Max(i,j): "<<Max(i,j)<<endl;

	string s1 = "hello";
	string s2 = "world";

	cout << "Max(s1,s2): "<<Max(s1,s2)<<endl;

	return 0;
}


# cpp

$g++ main.cpp support.cpp -o write



// 使用 typedef 为一个已有的类型取一个新的名字

typedef int _int;

<pre>

	枚举：
	enum enum_name { list of names } var_list

	定义枚举类型变量：
	[enum] 枚举名 枚举变量名 [=初始化值]；

	// 定义一个颜色枚举
	enum color
	{
		red,
		green,
		blue
		
	} color_enum;// 直接定义枚举变量color_enum



	extern 关键字在任何地方声明一个变量
	
	注意： 声明 和 定义 不是一个概念

	// 声明 fi变量
	extern float fi;
	
	// 声明函数
	int func();



	C++ 中有两种类型的表达式：

    左值（lvalue）：指向内存位置的表达式被称为左值（lvalue）表达式。左值可以出现在赋值号的左边或右边。
    右值（rvalue）：术语右值（rvalue）指的是存储在内存中某些地址的数值。右值是不能对其进行赋值的表达式，也就是说，右值可以出现在赋值号的右边，但不能出现在赋值号的左边。

</pre>

# C++ 变量作用域

作用域是程序的一个区域，一般来说有三个地方可以声明变量：

    在函数或一个代码块内部声明的变量，称为局部变量。
    在函数参数的定义中声明的变量，称为形式参数。
    在所有函数外部声明的变量，称为全局变量。

在所有函数外部定义的变量（通常是在程序的头部），称为全局变量。全局变量的值在程序的整个生命周期内都是有效的。全局变量可以被任何函数访问。也就是说，全局变量一旦声明，在整个程序中都是可用的。局部变量和全局变量的名称可以相同，但是在函数内，局部变量的值会覆盖全局变量的值。


# 初始化局部变量和全局变量

当局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。定义全局变量时，系统会自动初始化。


# 定义常量

在 C++ 中，有两种简单的定义常量的方式：

    使用 #define 预处理器。
    使用 const 关键字。


# 函数
函数声明会告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。在函数声明中，参数的名称并不重要，只有参数的类型是必需的。

### 在一个源文件中定义函数且在另一个文件中调用函数时，函数声明是必需的。在这种情况下，应该在调用函数的文件顶部声明函数。


# 指针
指针是一种类型【和int double一样 没什么区别】，指针变量是用来存放地址值【即内存位置的直接地址】

## 指针的值
所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数【即地址的值表示都是一样的】。不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。

# C++ 引用
引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。

# C++ 引用 vs 指针
1、不存在空引用。引用必须连接到一块合法的内存。

2、一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。

3、引用必须在创建时被初始化。指针可以在任何时间被初始化。

# 结构 struct 
<pre>

struct [structure tag]
{
   member definition;
   member definition;
   ...
   member definition;
} [one or more structure variables];  
	
structure tag 是可选的，每个 member definition 是标准的变量定义，比如 int i; 或者 float f; 或者其他有效的变量定义。在结构定义的末尾，最后一个分号之前，您可以指定一个或多个结构变量	

</pre>



# C\C++中声明与定义的区别

　　声明和定义是完全不同的概念，声明是告诉编译器“这个函数或者变量可以在哪找到，它的模样像什么”。而定义则是告诉编译器，“在这里建立变量或函数”，并且为它们分配内存空间。

　　函数声明与定义：

　　函数的声明如：int Add(int, int);函数声明就是给函数取名并指定函数的参数类型，返回值类型。值得注意的是，在C语言中，有一点跟C++不同，对于带空参数表的函数如：int func()；在C中代表可以带任意参数（任意类型，任意数量），而在C++中代表不带任何参数。

　　函数的定义如：int Add(int a, int b){} 函数定义看起来跟函数声明很像，但是它有函数体，如果函数体中使用了参数，就必须为参数命名，这里大括号代替了分号的作用。

　　变量的声明如：extern int i; 在变量定义前加extern关键字表示声明一个变量但不定义它，这对函数同样有效，如：extern int Add(int a, int b);因为没有函数体，编译器必会把它视作声明而不是定义，extern关键字对于函数来说是多余的，可选的。

　　变量的定义如：int i;如果在此之前没有对i的声明，那么这里既是对它的声明也是对它的定义，编译器会为其分配对应的内存。

# C++ 类访问修饰符
类成员的访问限制是通过在类主体内部对各个区域标记 public、private、protected 来指定的。关键字 public、private、protected 称为访问说明符。

一个类可以有多个 public、protected 或 private 标记区域。每个标记区域在下一个标记区域开始之前或者在遇到类主体结束右括号之前都是有效的。成员和类的默认访问修饰符是 private。

# 拷贝构造函数
拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。拷贝构造函数通常用于：

1、通过使用另一个同类型的对象来初始化新创建的对象。

2、复制对象把它作为参数传递给函数。

3、复制对象，并从函数返回这个对象。
<pre>
如果在类中没有定义拷贝构造函数，编译器会自行定义一个。如果类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数。拷贝构造函数的最常见形式如下：

classname (const classname &obj) {
   // 构造函数的主体
}
</pre>
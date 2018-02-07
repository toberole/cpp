#include <iostream>

using namespace std;


namespace first_space{

	void func(){
		cout<<"first_space"<<endl;
	}

}

int main(int argc, char const *argv[])
{
	
	first_space::func();
	return 0;
}
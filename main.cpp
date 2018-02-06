#include <iostream>
#include<stdio.h>


#include "math_.h"

int main(int argc, char** argv) {
	int i = 100;	
	
	printf("%d + %d = %d\n",1,2,add(1,2));
	
	char *str = "hello world\n";
	printf("%s",str);
	
	int *p = &i;
	printf("%d",*p);
	
	
	HttpConnect *http = new HttpConnect();
    http->getData("127.0.0.1", "/login", "id=liukang&pw=123");
    http->postData("127.0.0.1", "/login","id=liukang&pw=123");
	
	
	return 0;	
}

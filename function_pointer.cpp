#include <iostream>
using namespace std;

//void func(int a) {
//	cout << "inside the func a is " << a << endl;
//}

//int main() {
//	void (*fp)(int);
//	//fp = &func;
//	fp = func;
//	fp(10);
//	//(*fp)(9);
//	return 0;
//}


void add(int a, int b) {
	printf("%d", a + b);
}

void subtract(int a, int b) {
	printf("%d", a - b);
}

void multiply(int a, int b) {
	printf("%d", a*b);
}

int main(int argc, char **argv) {
	void(*func_ptr[])(int, int) = { add, subtract, multiply };
	(*func_ptr[2])(10, 2);
	//same as calling the below
	//(func_ptr[2])(10,2);
	return 0;
}
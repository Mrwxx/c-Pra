#include "hello.h"

int main() {
	hello();

	// 指针
	int a = 10;
	int b = 30;
	int* pa = &a;
	*pa = 20;
	cout << a << endl;

	// 1、常量指针，const在 *前面
	// 指针指向的值不能修改，指针的指向可以修改
	const int* pa2 = &a;
	//*pa2 = 20; 错误的
	pa2 = &b;
	cout << *pa2 << endl;

	// 2、指针常量，const在*后面，理解为固定的指针指向
	// 指针指向不可以修改，指针指向的值可以修改
	int* const pa3 = &a;
	// pa3 = &b; 错误的
	*pa3 = 30;
	cout << a << endl;

	// 3、const修饰指针和常量，const在*前后都有
	// 指针的指向和指针指向的值都不能修改
	const int* const pa4 = &a;
	// *pa4 = 40; 错误
	// pa4 = &b; 错误

	// 4、利用指针访问数组元素
	int arr[] = { 1,2,3,4,5 };
	int* arrp = arr;
	cout << "数组第一个元素" << arr[0] << endl;
	cout << "数组第一个元素" << *arrp << endl;

	for (int i = 0; i < size(arr); ++i) {
		cout << *arrp << endl;
		arrp++;
	}
}
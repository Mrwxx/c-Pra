#include "hello.h"

int main() {
	hello();

	// ָ��
	int a = 10;
	int b = 30;
	int* pa = &a;
	*pa = 20;
	cout << a << endl;

	// 1������ָ�룬const�� *ǰ��
	// ָ��ָ���ֵ�����޸ģ�ָ���ָ������޸�
	const int* pa2 = &a;
	//*pa2 = 20; �����
	pa2 = &b;
	cout << *pa2 << endl;

	// 2��ָ�볣����const��*���棬���Ϊ�̶���ָ��ָ��
	// ָ��ָ�򲻿����޸ģ�ָ��ָ���ֵ�����޸�
	int* const pa3 = &a;
	// pa3 = &b; �����
	*pa3 = 30;
	cout << a << endl;

	// 3��const����ָ��ͳ�����const��*ǰ����
	// ָ���ָ���ָ��ָ���ֵ�������޸�
	const int* const pa4 = &a;
	// *pa4 = 40; ����
	// pa4 = &b; ����

	// 4������ָ���������Ԫ��
	int arr[] = { 1,2,3,4,5 };
	int* arrp = arr;
	cout << "�����һ��Ԫ��" << arr[0] << endl;
	cout << "�����һ��Ԫ��" << *arrp << endl;

	for (int i = 0; i < size(arr); ++i) {
		cout << *arrp << endl;
		arrp++;
	}
}
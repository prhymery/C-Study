#include <iostream>	// ���̺귯�� ���
using namespace std;	// namespace ��� ���� �� Ŭ������ �������� std::cout -> cout

int main()
{
	cout << "Hello World!" << endl; // cout -> ����� ��Ÿ�� / endl -> end line
	cout << "Hello" << " World!" << endl; // ���� ������(<<)�� �����ʿ� ����� �����͸� ��� ��Ʈ���� ����gka / << �� �߰��� �Է��ؼ� ����ϰ� ���� ������ �����ؼ� ����� �� ����

	int a = 100;	// 32-bit
	long l = 100;	// 64-bit
	float f = 0.2f;	//32-bit
	double d = 0.9129387293847;	// 64-bit
	char c = 'x';	// ; -> ��ɾ ������ ������
	bool b = true;
	int i = 0b1100;	// 0b ���λ縦 ����ؼ� ���� ���ͷ��� �Ҵ��� �� �ִ�
	const int aa = ~a;	// ��Ʈ ������(~) -> 1�� 0, 0�� 1�� ������Ŵ

	 cin >> a;	// ���� ������(>>)�� ���� ����ڰ� �Է��� �����͸� �Է� ��Ʈ������ �����Ͽ�, �����ʿ� ��ġ�� ������ ����

	 int number = 1;
	 number |= 3;	// ��Ʈ ���� number = number | 3;
	 number &= 3;	// ��Ʈ ���� number = number & 3;

	return 0;
}
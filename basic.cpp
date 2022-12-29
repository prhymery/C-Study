#include <iostream>	// ���̺귯�� ���
using namespace std;	// namespace ��� ���� �� Ŭ������ �������� std::cout -> cout

void Basic()
{
	// cout -> ����� ��Ÿ�� / endl -> end line
	cout << "Hello World!" << endl;
	// ���� ������(<<)�� �����ʿ� ����� �����͸� ��� ��Ʈ���� ����gka / << �� �߰��� �Է��ؼ� ����ϰ� ���� ������ �����ؼ� ����� �� ����
	cout << "Hello" << " World!" << endl;

	int a = 100;	// 32-bit
	long l = 100;	// 64-bit
	float f = 0.2f;	//32-bit
	double d = 0.9129387293847;	// 64-bit
	char c = 'x';	// ; -> ��ɾ ������ ������
	bool b = true;
	int i = 0b1100;	// 0b ���λ縦 ����ؼ� ���� ���ͷ��� �Ҵ��� �� ����
	const int aa = ~a;	// ��Ʈ ������(~) -> 1�� 0, 0�� 1�� ������Ŵ

	// ���� ������(>>)�� ���� ����ڰ� �Է��� �����͸� �Է� ��Ʈ������ �����Ͽ�, �����ʿ� ��ġ�� ������ ����
	cin >> a;

	int number = 1;
	number |= 3;	// ��Ʈ ���� number = number | 3;
	number &= 3;	// ��Ʈ ���� number = number & 3;
}

void Array()
{
	// C++������ �ʱ�ȭ ����Ʈ�� ���� �ڵ����� �迭�� ���̸� ������ �� ����
	int arr[] = { 1,2, };	// length -> 2

	// ���̰� ������ �ϳ��� �迭�� �ٸ� �迭�� ��°�� ������ ���� ����. ������ �߻���.
	int arr1[3] = {};
	int arr2[3] = {};
	//arr1 = arr2; 

   // C++ �����Ϸ��� �˻����� �ʴ� �κ�
	int arr3[3] = { 0,1,2 };
	arr3[2] = 9;
	// C++ �����Ϸ��� �迭�� ���� ���� �˻��Ͽ� ������ ��������� ����
	for (int i = 0; i < 5; i++)
	{
		cout << arr3[i] << endl;
	}
}

int main()
{
	 int grade[] = { 1, 2, 3 };
	 int len = sizeof(grade) / sizeof(grade[0]);
	 cout << sizeof(grade) << endl;
	 cout << sizeof(grade[0]) << endl;
	 cout << len << endl;

	return 0;
}
#include <iostream>	// 라이브러리 사용
using namespace std;	// namespace 사용 선언 시 클래스명 생략가능 std::cout -> cout

void Basic()
{
	// cout -> 출력을 나타냄 / endl -> end line
	cout << "Hello World!" << endl;
	// 삽입 연산자(<<)는 오른쪽에 출력할 데이터를 출력 스트림에 삽입gka / << 를 추가로 입력해서 출력하고 싶은 내용을 연속해서 출력할 수 있음
	cout << "Hello" << " World!" << endl;

	int a = 100;	// 32-bit
	long l = 100;	// 64-bit
	float f = 0.2f;	//32-bit
	double d = 0.9129387293847;	// 64-bit
	char c = 'x';	// ; -> 명령어를 끝내는 연산자
	bool b = true;
	int i = 0b1100;	// 0b 접두사를 사용해서 이진 리터럴을 할당할 수 있음
	const int aa = ~a;	// 비트 연산자(~) -> 1은 0, 0은 1로 반전시킴

	// 추출 연산자(>>)를 통해 사용자가 입력한 데이터를 입력 스트림에서 추출하여, 오른쪽에 위치한 변수에 저장
	cin >> a;

	int number = 1;
	number |= 3;	// 비트 연산 number = number | 3;
	number &= 3;	// 비트 연산 number = number & 3;
}

void Array()
{
	// C++에서는 초기화 리스트에 맞춰 자동으로 배열의 길이를 설정할 수 있음
	int arr[] = { 1,2, };	// length -> 2

	// 길이가 같더라도 하나의 배열을 다른 배열에 통째로 대입할 수는 없음. 오류가 발생함.
	int arr1[3] = {};
	int arr2[3] = {};
	//arr1 = arr2; 

   // C++ 컴파일러가 검사하지 않는 부분
	int arr3[3] = { 0,1,2 };
	arr3[2] = 9;
	// C++ 컴파일러가 배열의 길이 등을 검사하여 오류를 출력해주지 않음
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
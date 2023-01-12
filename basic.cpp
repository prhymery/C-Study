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

	int grade[] = { 1, 2, 3 };
	int len = sizeof(grade) / sizeof(grade[0]);
	cout << sizeof(grade) << endl;
	cout << sizeof(grade[0]) << endl;
	cout << len << endl;

	// narrowing cast - int형 변수를 실수값으로 초기화함으로써 데이터의 손실이 발생
// 이렇게 데이터의 손실이 발생하는 암시적인 타입 변환을 narrowing cast라고 함
	int A = 3.14;
	int B = { 3 };	// 초기화 리스트를 이용한 초기화 
	//C++11에서는 초기화 리스트를 이용하여 narrowing cast로 인한 데이터의 손실 및 호환성 문제를 미리 방지할 수 있음
	//int C = { 3.14 };	// 초기화 리스트를 이용한 초기화에서 narrowing cast 이 발생하면 오류 남
	cout << B << endl;
}

int main()
{
	// 다차원 배열 - 배열 요소로 또 다른 배열을 가지는 배열을 의미함
	// 즉, 2차원 배열은 배열 요소로 1차원 배열을 가지는 배열이며,
	//	3차원 배열은 배열 요소로 2차원 배열을 가지는 배열이고,
	//	4차원 배열은 배열 요소로 3차원 배열을 가지는 배열인 것입니다.

	// arr1 과 arr2 가 메모리 상에 차지하는 공간은 같음
	int arr1[6] = { 10, 20, 30, 40, 50, 60 };
	// 2차원 배열 선언 및 초기화가 이렇게도 가능, arr2[0][0] 부터 차례대로 초기화
	int arr2[2][3] = { 10, 20, 30, 40, 50, 60 };
	// 초기화하는 배열 요소의 개수가 배열의 총 길이보다 적으면, 나머지 배열 요소는 모두 0으로 초기화됨
	int arr3[2][3] = { 1,2,3 };

	int arr4[3][4] = {
		{1,2,3,4},
		{4,5,6,7},
		{2,4,6,8}
	};
	int arr_col_len = sizeof(arr4[0]) / sizeof(arr4[0][0]);
	int arr_row_len = (sizeof(arr4) / arr_col_len) / sizeof(arr4[0][0]);
	cout << "arr_col_len :" << arr_col_len << endl;
	cout << "arr_row_len :" << arr_row_len << endl;


	// 일부 요소만 초기화할 수 있음, 초기화 하지 않은 배열 요소는 모두 0으로 자동 초기화 됨
	int arr5[2][3] = {
	{1,},
	{4,5}
	};

	// 배열의 길이를 명시하지 않고 자동으로 배열의 길이를 설정할 수 있음
	// 행의 길이는 생략할 수 있지만 열의 길이는 반드시 명시해야 됨
	int arr6[][3] = {
	{1,},
	{4,5, 6},
	{8,9}
	};


	return 0;
}
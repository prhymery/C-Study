# C++

## 개요
C++은 C언어를 기초로 삼아 만든 언어이므로, 기존의 C 표준 라이브러리를 그대로 사용할 수 있습니다.
타입, 연산자, 제어문, 포인터 등의 주요 문법을 C언어에서 가져왔기 때문에 C언어에 대한 기초를 알고 있으면 좋습니다

1. C++은 절차 지향적이며 구조적 프로그래밍 언어입니다.
2. C++은 객체 지향 프로그래밍 언어입니다.
3. C++은 일반화 프로그래밍 언어입니다.

---
## C 언어와 C++ 의 차이점
| | C | C++|
|-|-|-|
|주석(코멘트 기입방법)|`/* */`|`/* */`, `//`|
|함수를 정의하기 전에 <br> 함수의 호출이 있는 경우 <br> 함수의 [프로토타입 선언](#프로토타입-선언)| 컴파일 에러 발생 X |컴파일 에러 발생 O <br> 반드시 프로토타입을 선언해야함|
|지역 변수 선언|`{}`로 에워싼 블록의 선두에서만|블록 내의 어느 곳에서나 가능하나<br>변수 선언은 변수 사용 직전에 하기를 권장<pre><code>int Number <br>Number = 3;</code></pre>|
|카운터를 for문 안에 선언|블록을 시작하고 카운터 선언|for문 안에 카운터 선언<pre><code>for(<U>**int i=0**</U>; i<=5;i++>)</code></pre>|
|#define 대신 const 사용|수치를 정의 할 때 #define 사용|수치를 정의 할 때 const 로 대신 사용 및 권장|

## const
- const 를 지정한 포인터를 일반 포인터에 대입하려고 하면 컴파일 에러 남
```C++
void ChangeString(const char* ptr)
{
    char* buf;
    buf = *ptr; // 컴파일 에러
    buf[0] ='b' // 위에서 컴파일 에러가 발생하지 않으면 const 를 지정한 포인터의 값이 변경됨 
}
```

## literal
- 정수 리터럴
``` C++
int num1 = 10;    // 10진수 10
int num2 = 0x3EB;    // 16진수 3EB
int num3 = 0b1101   // 2진수 1101
```
- 문자열 리터럴
```C++
char str1[] = "Hi";   // ASCII 코드
char str2[] = u8"Hi";   // 선두에 U8을 붙이면 UTF-8
char str3[] = u"Hi";    // 선두에 u를 붙이면 UTF-16
char str4[] = U"Hi";    // 선두에 U를 붙이면 UTF-32
char16_t char1; // UTF-16 문자를 표현하기 위한 문자형
char32_t char2; // UTF-32 문자를 표현하기 위한 문자형
```
- 에스케이프 문자를 무시하는 리터럴 R"()"
```C++
printf("C:\\github");   // C:\github 로 출력
printf(R"(C:\github)");   // C:\github 로 출력
```

## enum
- 열거형 요소에 임의의 수를 지정하면 그 수에서부터 1씩 증가하는 정수가 됨
  ```C++
  enum Colors {Red, Green = 10, Yellow, Blue= 20, Purple}; // 0, 10, 11, 20, 21
  ```
- enum class
  - enum 과는 다르게 각 요소의 유효 범위가 그열거형 내부로만 한정됨
    ```C++
    enum Colors {Red, Blue, Green};    
    enum LightColors {Red, Blue, Green}; // enum 을 사용하면 요소 이름을 중복하여 사용불가
    // enum class 는 다른 enum class 에서 요소 이름 중복 가능
    enum class Colors {Red, Blue, Green};    
    enum class LightColors {Red, Blue, Green}; 
                :
    Colors bookColor = Colors::Red; // 어떤 열거형인지 지정
    ```

## this
- this 를 기술한 오브젝트 자체를 가리키는 포인터




---
#### 프로토타입 선언
> ##### 함수의 이름과 형태를 컴파일러에게 알려주는 것
> ##### 함수의 내용을 정의하기 전에 '*함수의 호출 방법* '을 미리 기술해 두는 것
> ##### 함수를 호출하기 전에 '*함수의 정의* '가 없을 경우, 반드시 프로토 타입을 선언해야됨
---
[C 언어와 C++ 의 차이점](#c-언어와-c-의-차이점) <!-- +기호를 없애야 링크 연결됨 -->


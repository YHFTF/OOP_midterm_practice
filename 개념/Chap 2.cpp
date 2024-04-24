/*
main() 함수
    - 프로그램의 시작점
    표준 모양 :
    int main() {
        return 0;
    }
    1. **int 가 표준 모양이다.**
    2. main 에서는 리턴값을 생략 할 수 있따.
#include <iostream>
    <iostream> 헤더 파일 : 표준 입출력, 객체, 변수
    stream 이란 : 데이터의 흐름
    c++ 입출력 스트림은 버퍼를 가진다.

cout
    - 콘솔 출력 스트림
    - << 연산자로 출력
    - endl로 개행

namespace Kim{
    int f();
    void m();
}

    사용할때 Kim::f(); Kim::m(); 으로 사용
    using namespace Kim; 을 사용하면 Kim:: 을 생략할 수 있다.
    다른 네임 스페이스에 같은 이름의 함수가 있어도 상관없다.

cin
    - 콘솔 입력 스트림
    - >> 연산자로 입력
    cin에 오류가 생겼을때
    cin.clear(); // 에러 플래그를 초기화
    cin.ignore(100, '\n'); // 개행문자를 100개까지 무시
    cin.fail(); // 에러가 발생했는지 확인

c ++ 에서 변수 선언은 사용되기 전에만 하면됨.
    장점 : 타이핑 오류 사전 발견 가능
    단점 : 변수가 사용되는 위치를 찾아야함.

c++ 문자열
    C 스트링 방식
    string 클래스 이용 : <string> 헤더 파일 사용.
    cin 은 빈칸 없이 입력받음.

    cin.getline(char buf[],int size, char delimitChar) : 빈칸을 포함하여 입력받음.
    ex) cin.getline(buf, 100, '\n'); // 개행문자가 나올때까지 입력받음.

    getline() 함수 사용법
    getline(cin, str); // cin으로 입력받아 str에 저장
    getline(CS,20); // CS로 입력받아 20개까지 저장

*/
/*
객체지향 프로그래밍 : 변수와 함수를 묶어서 객체를 만들고 그 객체 단위로 프로그래밍
    Class : 사용자 정의 자료형 (붕어빵 틀)
    클래스에는 변수라는 저장공간과 기능이라는 프로시저(함수)가 포함됨.

    class Circle{
        public:
            int radius;
        getArea(){
            return 3.14*radius*radius;
        }
    }

    객체 : 클래스를 이용하여 만든 변수 (붕어빵)

    Circle pizza;

객체의 구성 요소
    객체의 선언 Circle pizza;
    멤버 변수 : 내부의 변수 radius
    멤버 함수 : 내부의 프로시저 getArea()

생성자
    Ex:
    Circle(int r) {
        radius = r;
    }

클래스 특성
    **캡슐화** : 접근 지정자를 통한 캡슐화 구현
        Ex : public, private, protected
    **상속** : 부모 클래스의 특성을 자식 클래스가 물려받는 것
    Ex:
    class Phone {
        void call();
        void receive();
    };
    class SmartPhone : public Phone {
        void surf();
    };
    **다형성** : 같은 이름의 함수가 다른 기능을 하는 것
    연산자 중복, 함수 중복 정의, 함수 오버라이딩

    c++에서 객체 지향을 도입한 목적
        1. 프로그램의 유지보수가 쉽다.
        2. 프로그램의 재사용성이 높다.
        3. 프로그램의 신뢰성이 높아진다.
        4. 프로그램의 생산성이 높아진다.

*/
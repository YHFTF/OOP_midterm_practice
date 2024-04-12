#include <iostream>
using namespace std;

int main() {
    char c[100]; // 한 라인에 100개의 문자면 충분하다.
    int count = 0;
    cin.getline(c);
    

    
    cout << "문자들을 입력하라(100개 미만)." << endl;
    cout << 'x' << "의 개수는 " << count << endl;
}
#include <iostream>
using namespace std;
template <class T>

T reverseArray(T *x,T size){
    for (int i = 0; i < size / 2; i++){
        swap(x[i], x[size - 1 - i]);
    }
    return 0;
}

int main() {
    int x[] = {1, 10, 100, 5, 4};
    reverseArray(x, 5);
    for(int i=0; i<5; i++)
        cout << x[i] << ' '; // 4 5 100 10 1 이 출력된다.
    cout << endl;
}
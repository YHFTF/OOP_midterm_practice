#include <iostream>
using namespace std;

int biggest(double *a, int b){
    int temp = a[1];
    for(int i=0;i<b;i++){
        if (temp < a[i]){
            temp = a[i];
        }
    }

    return temp;
}

int main() {
    double a[5];
    cout << "5 개의 실수를 입력하라>>";
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    cout << "제일 큰 수 = " << biggest(a, 5) << endl;
}
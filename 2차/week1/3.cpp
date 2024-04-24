#include <iostream>
using namespace std;

int biggest(double a[], int n){
    double max=a[0];
    for(int i=0; i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    return max;
}

int main(){
    double a[5];
    cout << "5 개의 실수를 입력하라>>";

    for(int i=0;i<5;i++){
        cin >> a[i];
    }

    cout << "제일 큰 수 ="<< biggest(a,5) << endl;
}
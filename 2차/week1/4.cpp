#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char c[100];
    int count = 0;
    cout << "문자들을 입력하라(100개 미만)." << endl;
    cin.getline(c,100);
    for(int i =0; i<strlen(c) ;i++){
        if(c[i]=='x'){
            count += 1 ;
        }
    }
    cout << 'x' << "rkqt dms ? " << count << endl;
}
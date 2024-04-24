#include <iostream>
#include <string>
using namespace std;

string x,y;


int main(){
    char password1[100],password2[100];

    cout << "New password >>";
    getline (cin,x);
    cout << "New password again >>";
    getline (cin,y);

    if(x==y){
        cout << "same.";
    }
    else{
        cout << "not same.";
    }


}
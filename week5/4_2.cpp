#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> a;
string name;

int main(){
    for(int i=0; i<5; i++){
        cout << i+1 <<">>";
        getline(cin,name);
        a.push_back(name);
    }

    string temp = a[0];
    for(int i=0; i<5; i++){
        if(temp < a[i]){
            temp = a[i];
        }
    }
    cout << "사전에서 가장 뒤에 나오는 이름은 홍진민 "<< temp;
     
}
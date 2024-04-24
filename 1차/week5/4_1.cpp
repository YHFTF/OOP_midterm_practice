#include <iostream>
#include <string>
using namespace std;

int main(){
    string a[5];
   for(int i =0;i<5;i++){
    getline(cin,a[i]);

   } 
   string temp = a[0];
   
   for(int i =0;i<5;i++){
    if(temp < a[i]){
        temp = a[i];
    }
   } 
   cout << "사전에서 가장 뒤에 나오는 문자열은 " << temp;
}

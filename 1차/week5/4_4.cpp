#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;

    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
    getline(cin, s, '&');

    string f, r;

    cin.ignore();

    cout << "find" << endl;
    getline (cin ,f);

    cout << "replace" << endl;
    getline (cin ,r);

    int pos=0;
    
    while(s.find(f) != string::npos){
        pos = s.find(f,pos);
        s.erase(pos,f.size());
        s.insert(pos,r);
        pos += f.size();
    }




    cout << s << endl;
}
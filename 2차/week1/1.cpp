#include <iostream>
int sum(int, int);
int main(){
    int n=0;

    std::cout << "끝수를 입력하세요 >>";
    std::cin >> n;
    if(n<=0){
        std::cout << "양수를 입력하세요!";
        return 0;
    }
    std::cout << "1에서 " << n << "까지의 합은 " << sum(1,n) << "입니다.";
    return 0;
}

int sum(int a,int b){
    int res = 0;

    for(int k=a;k<=b;k++){
        res += k;
    }

    return res;
}
#include <iostream>
#include <bits/stdc++.h>

int main(){
    int a,b,c,d,e;
    std::cin >> a >> b >> c >> d >> e;
    int answer=0;

    if (a < 0){
        answer = -a*c + d + b*e;
    }
    else if (a > 0) {
        answer = (b - a) * e;
    }

    std::cout << answer << std::endl;

}

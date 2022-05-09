#include <iostream>
#include <bits/stdc++.h>

int main (){

int A, B, C ,D, sum, x, y;
std::cin >> A >> B >> C >> D;
sum = A + B + C + D;
x = sum / 60;
y = sum % 60;
std::cout << x << ' ' << y << std::endl;
return 0;
}

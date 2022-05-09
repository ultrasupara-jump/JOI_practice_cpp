#include <iostream>
#include <bits/stdc++.h>

int main(){
    int N, M, Ai;
    std::cin >> N >> M;
    long long sum = 0;

    for (int i=0; i < M; i++){
        std::cin >> Ai;
        sum += Ai;
    }
    if (sum > N) {
        std::cout << -1 << std::endl;
    }
    else{
        std::cout << N - sum <<std::endl;
    }
}

#include <iostream>
#include <bits/stdc++.h>

int main(){
    int N;
    std::string S;
    std::cin >> N >> S;

    for (int i = 1; i < N - 1; i++){
        if(S[i-1] == 'j' && S[i] == 'o' && S[i+1] =='i'){
            S[i - 1] = 'J';
            S[i] = 'O';
            S[i + 1] = 'I';
        }
    }
    std::cout << S << std::endl;

    if(S[S.size() -1] == 's'){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }
}

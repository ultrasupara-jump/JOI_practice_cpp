#include <iostream>
#include <bits/stdc++.h>

int main(){
    int N ,M ,A[100] ,B[100];
    std::cin >> N >> M;

    for(int i=0; i<N; i++) {
        std::cin >> A[i];
    }

    for(int j=0; j<M; j++){
        B[j] = 0;
    }

    for(int i=0; i<N; i++) {
        B[A[i] - 1]++;
    }
    int ans = 0;
    for (int j = 0; j < M; j++) {
        if(ans < B[j]){
            ans = B[j];
        }
    }
    std::cout << ans << std::endl;
}

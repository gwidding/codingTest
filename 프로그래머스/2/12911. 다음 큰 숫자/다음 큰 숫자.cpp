#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int binary (int n) {
    int cnt = 0;
    while(n > 0) {
        cnt += (n % 2) ? 1 : 0;
        n /= 2;
    }
    
    return cnt;
}

int solution(int n) {
    int answer = n + 1;
  
    while (true) {
        if(binary(answer) == binary(n))
            break;
        answer++;
    }

    return answer;
}
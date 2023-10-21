#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if (n == pow(trunc(sqrt(n)),2) ) {
        answer = pow(sqrt(n)+1, 2);
    }
    else answer = -1;
    return answer;
}
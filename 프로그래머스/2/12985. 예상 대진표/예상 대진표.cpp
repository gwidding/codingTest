#include <iostream>
#include <cmath>
using namespace std;

int solution(int n, int a, int b)
{
    int answer = log(n) / log(2);
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    while (n > 0) {
        n /= 2;
        if (a <= n && n < b)
            break;
        else if (a > n) {
            a -= n;
            b -= n;
        }
        answer--;
    }
    
    return answer;
}
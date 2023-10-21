#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long num = n;
    int cnt = 0;
    while (num != 1) {
        num = (num % 2 == 0) ? num/2 : num*3 + 1;
        cnt++;        
        if (cnt > 500) return -1;
    }
    return cnt;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd (int a, int b) {
    while (b != 0) {
        if (a % b == 0) {
            return b;
        }
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return b;
}


int lcm (int a, int b) {
    int tmp = gcd(a, b);

    return a * b / tmp;
}

int solution(vector<int> arr) {
    int tmp = 1;
    sort(arr.rbegin(), arr.rend());
    
    for (int i = 0; i < arr.size(); i++) {
        tmp = lcm(tmp, arr[i]);
    }
    
    return tmp;
}
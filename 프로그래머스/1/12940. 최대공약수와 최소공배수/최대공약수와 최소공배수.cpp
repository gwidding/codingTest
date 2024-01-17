#include <string>
#include <vector>
#include <iostream>

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

    return tmp * (a / tmp) * (b / tmp);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    if (m > n) {
        int tmp = n;
        n = m;
        m = tmp;
    }
    cout << gcd(36, 24) << " " << lcm(36, 24);

    answer.push_back(gcd(n,m));
    answer.push_back(lcm(n,m));
    
    return answer;
}
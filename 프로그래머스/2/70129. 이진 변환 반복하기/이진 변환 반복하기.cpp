#include <string>
#include <vector>

using namespace std;
int zero_cnt = 0;
int bin_cnt = 0;

int remove_zero(string s) {
    int after_remove = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1')
            after_remove++;
        else
            zero_cnt++;
    }
    return after_remove;
}

string binary (int n) {
    string result;
    while (n > 0) {
        if (n % 2 == 1)
            result += '1';
        else
            result += '0';
        n /= 2;
    }
    bin_cnt++;
    return result;
}

vector<int> solution(string s) {
    
    while (s != "1") {
        s = binary( remove_zero(s) );
    }
    vector<int> answer = {bin_cnt, zero_cnt};
    return answer;
}
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> tmp;
    
    for (int i = 0; i < s.size(); i++) {
        if (tmp.empty() || tmp.top() != s[i])
            tmp.push(s[i]);
        else
            tmp.pop();
    }
    
    if (tmp.empty())
        answer = 1;

    return answer;
}
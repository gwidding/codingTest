#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int correct (string s) {
    stack<char> stack;
    char popChar;
    
    for (auto& i : s) {
        if (i == '(' || i == '{' || i =='[')
            stack.push(i);
        else {
            if (i == ')')
                popChar = '(';
            else if (i == '}')
                popChar = '{';
            else
                popChar = '[';
        
            if (stack.empty() || stack.top() != popChar)
                return 0;
            stack.pop();
        }
    }
    
    return 1;   
}

string rotate(string s) {
    string result = s;
    char firstChar = result[0];
    result.erase(0, 1);
    result += firstChar;
    return result;
}

int solution(string s) {
    int answer = 0;
    if (s.size() % 2)
        return 0;
    
    for (int i = 0; i < s.size(); i++) {
        answer += correct(s);
        s = rotate(s);
    }
    
    return answer;
}
#include<string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    vector<char> s_left;
    vector<char> m_left;
    
    int len = s.size();
    
    for (int i = 0; i < len; i++) {
        switch (s[i]) {
            case '(' :
                s_left.push_back(s[i]);
                break;
            case ')' :
                if (s_left.size() < 1) 
                    return false;
                else 
                    s_left.pop_back();
                break;
            case '{' :
                m_left.push_back(s[i]);
                break;
            case '}' :
                if (m_left.size() < 1)
                    return false;
                else 
                    m_left.pop_back();
                break;
            default :
                return false;
        }
    }
    if (s_left.size() + m_left.size() > 0)
        return false;

    return true;
}
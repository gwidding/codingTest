#include <string>
#include <vector>
#include <iostream>

using namespace std;


vector<int> solution(int n, vector<string> words) {
    char tmp;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0 && words[i].front() != tmp) {
            return {i % n + 1, i / n + 1};
        }
        else {
            tmp = words[i].back();
        }
        for (int j = 0; j < i; j++) {
            if (words[i] == words[j]) {
                return {i % n + 1, i / n + 1};
            }
        }
    }
    return {0,0};
}
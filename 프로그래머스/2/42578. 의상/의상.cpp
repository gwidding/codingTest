#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> myMap;
    
    for (int i = 0; i < clothes.size(); i++) {
        myMap[clothes[i][1]]++;
    }
    
    for (auto& pair : myMap) {
        answer *= pair.second + 1;
    }
    
    return answer - 1;
}
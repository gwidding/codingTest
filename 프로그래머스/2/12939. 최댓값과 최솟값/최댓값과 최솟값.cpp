#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> nums;
    
    stringstream ss(s);
    string s1;
    while (ss >> s1){
        nums.push_back(stoi(s1));
    }
    int max = nums[0];
    int min = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > max)
            max = nums[i];
        else if (nums[i] < min)
            min = nums[i];
    }
    answer += to_string(min) + " " + to_string(max);

    return answer;
}
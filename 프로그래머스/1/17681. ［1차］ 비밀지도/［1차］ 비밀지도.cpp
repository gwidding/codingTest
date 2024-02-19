#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for (int i = 0; i < n; i++) {
        string tmp;
        arr1[i] = arr1[i] | arr2[i];
        for (int j = 0; j < n; j++) {
            tmp += (arr1[i] % 2) ? '#' : ' ';
            arr1[i] = arr1[i] >> 1;
        }
        cout << arr1[i] << " ";
        reverse(tmp.begin(), tmp.end());
        answer.push_back(tmp);
    }
    return answer;
}
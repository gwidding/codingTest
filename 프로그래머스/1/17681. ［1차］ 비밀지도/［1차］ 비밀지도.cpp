#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

vector<string> binary(vector<int> arr) {
    vector<string> bin;
    
    for (int i = 0; i < arr.size(); i++) {
        string tmp;
        int x = arr[i];
        
        while (x > 0) {
            tmp += (x % 2) ? '1' : '0';
            x /= 2;
        }
        
        x = arr[i];
        int y;
        if (x == 0)
            y = 0;
        else if (x == 1)
            y = 1;
        else 
            y = log10(x) / log10(2);
            
        for (int k = 0; k < arr.size() - y; k++) {
            tmp +='0';
        }
        bin.push_back(tmp);
    }
    
    return bin;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> map1 = binary(arr1);
    vector<string> map2 = binary(arr2);
    
    for (int i = 0; i < n; i++) {
        string tmp;
        for (int j = n - 1; j >= 0; j--) {
            if (map1[i][j] == '0' && map2[i][j] == '0') 
                tmp += ' ';
            else
                tmp += '#';
        }
        answer.push_back(tmp);
    }
    
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    // bottom-up
    int floor = triangle.size() - 1;
    
    while (floor > 0) {
        for (int i = 0; i < floor; i++) {
            triangle[floor-1][i] += max(triangle[floor][i], triangle[floor][i+1]);
        }
        floor--;
    }    
    
    return triangle[0][0];
}
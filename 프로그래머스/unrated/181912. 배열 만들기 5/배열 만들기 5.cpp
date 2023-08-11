#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string tmp = "";
    for (int j = 0; j < intStrs.size(); j++){
        for (int i = s; i < s+l; i++){
            tmp +=intStrs[j][i];
        }
        int num = stoi(tmp);
        tmp = "";
        if (num > k){
            answer.push_back(num);
        }
    }
    return answer;
}
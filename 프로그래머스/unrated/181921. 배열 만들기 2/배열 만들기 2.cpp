#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for (int n = l; n <=r; n++){
        int k = 0;
        string a = to_string(n);
        
        for(int i = 0; i<a.size(); i++){
            if (a[i] == '5' || a[i] == '0') k++;    
        }
        if( k == a.size()) answer.push_back(n);
    }   
    if (answer.empty()) answer = {-1};
    return answer;
}
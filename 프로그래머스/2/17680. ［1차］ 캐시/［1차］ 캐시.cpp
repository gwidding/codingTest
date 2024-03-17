#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> cache;
    
    if (cacheSize == 0)
        return (cities.size() * 5);
    
    for (int i = 0; i < cities.size(); i++){
        for (char& c : cities[i]) {
            if (isupper(c))
                c = tolower(c);         
        }

        auto it = find(cache.begin(), cache.end(), cities[i]);
        
        if (it != cache.end()) {
            cache.erase(it);
            cache.push_back(cities[i]);
            answer++;
        }
        else {
            if (cache.size() >= cacheSize)
                cache.erase(cache.begin());
            cache.push_back(cities[i]);
            answer += 5;
        }
        
    }
    return answer;
}
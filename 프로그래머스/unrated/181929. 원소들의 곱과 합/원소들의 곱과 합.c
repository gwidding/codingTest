#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int mul = 1;
    int sum_s = 0;
    for (int i=0; i<num_list_len; i++){
        mul *= num_list[i];
        sum_s += num_list[i]; 
    }
    answer = (mul < sum_s*sum_s);
    return answer;
}
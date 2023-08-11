#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int sum(int x,y,z){
    return x+y+z;
}
int squ(int x,y,z){
    return x*x + y*y + z*z;
}
int cube(int x,y,z){
    return x*x*x + y*y*y +z*z*z;
}

int solution(int a, int b, int c) {
    int answer = 0;
    if (a != b && b!= c && a!=c){
        answer = sum(a,b,c);
    }
    else if (a==b && b==c){
        answer = sum(a,b,c) * squ(a,b,c) * cube(a,b,c);
    }
    else{
        answer = sum(a,b,c) * squ(a,b,c);
    }
    return answer;
}
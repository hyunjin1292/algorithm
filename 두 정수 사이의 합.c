#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    if(a>b){
        int cnt=a;
        a=b;
        b=cnt;
    }
    for(int i=a; i<=b; i++) {
        answer+=i;
    }
    return answer;
}
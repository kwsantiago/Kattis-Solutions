#include <stdio.h>

#define N 42

int isSeen(int *p, int num);

int isSeen(int *p, int num){
    for(; *p; p++){
        if(*p == num)
            return 1;
    }
    return 0;
}

int main(int argc, char* argv[]){
    int i, seenTrue, num, count = 0, seen[10];
    int *p = &seen[0];
    for(i = 0; i < 10; i++){
        scanf("%d", &num);
        num = num % N;
        seen[i] = num;
        seenTrue = isSeen(p, num);
        if(seenTrue)
            count++;
    }
    printf("%d\n", count);
    return 0;
}

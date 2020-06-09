#include <stdio.h>

void winner(int numStones);

void winner(int numStones){
    if(numStones %  2 == 0)
        printf("Bob\n");
    else
        printf("Alice\n");
}

int main(){
    int numStones;
    scanf("%d", &numStones);
    winner(numStones);
    return 0;
}

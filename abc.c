#include <stdio.h>

void rearrange(int* a, int* b, int* c);

void rearrange(int* a, int* b, int* c){
    if(*a > *b){
        int tmp = *a;
        *a = *b;
        *b = tmp;
        rearrange(a,b,c);
    }
    else if(*b > *c){
        int tmp = *b;
        *b = *c;
        *c = tmp;
        rearrange(a,b,c);
    }
}

void printNum(char order, int *a, int* b, int* c){
    switch(order){
        case 'A':
            printf("%d ", *a);
            break;
        case 'B':
            printf("%d ", *b);
            break;
        case 'C':
            printf("%d ", *c);
            break;
    }
}

int main(int argc, char* argv[]){
    unsigned int a, b, c;
    char order[4];
    scanf("%d %d %d", &a, &b, &c);
    scanf("%s", order);
    int *pA = &a, *pB = &b, *pC = &c;
    rearrange(pA, pB, pC);
    for(int i = 0; i <= 3; i++)
        printNum(order[i], pA, pB, pC);
    printf("\n");
    return 0;
}

#include <stdio.h>

int main(int argc, char* argv[]){
    int i, total = 0, numLines, tmp, num1, num2;
    scanf("%d", &numLines);
    for(i = 0; i < numLines; i++){
        scanf("%d %d", &num1, &num2);
        tmp = num2 - num1;
        if(tmp == 0)
            total++;
        else
            total += ++tmp;
    }
    if(total >= 365){
        printf("365\n");
        return 0;
    }
    printf("%d\n", total);
    return 0;
}

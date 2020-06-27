#include <stdio.h>

int main(int argc, char* argv[]){
    int i, numTasks, minutes, num, sum = 0;
    scanf("%d %d", &numTasks, &minutes);
    for(i = 0; i < numTasks; i++){
        scanf("%d", &num);
        sum += num;
        if(sum > minutes)
            break;
    }
    printf("%d\n", i);
    return 0;
}

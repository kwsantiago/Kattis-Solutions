#include <stdio.h>

int main(int argc, char* argv[]){
    char string[30];
    int sCount = 0;
    scanf("%s", &string);
    for(int i = 0; i < 30; i++){
        if(string[i] == 's' && string[++i] == 's'){
            printf("hiss\n");
            return 0;
        }
    }
    printf("no hiss\n");
    return 0;
}

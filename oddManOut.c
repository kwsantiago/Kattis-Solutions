#include <stdio.h>

void findAlone(int numGuests);

void findAlone(int numGuests){
    int i, nums[numGuests];
    for(i = 0; i < numGuests; i++)
        scanf("%d", &nums[i]);
    int *p = &nums[0], *j = &nums[1];
    for(; *p; p++){
        for(; *j; j++){
            if(*p == *j)
                break;
        }
    }
    printf("%d %d", *p, *j);
}

int main(int argc, char* argv[]){
    int numCases, i, numGuests;
    scanf("%d", &numCases);
    for(i = 0; i < numCases; i++){
        scanf("%d", &numGuests);
        findAlone(numGuests);
    }
    return 0;
}

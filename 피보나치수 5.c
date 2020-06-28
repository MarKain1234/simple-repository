#include <stdio.h>
int pibonatchi(int num) {
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;
    return pibonatchi(num-2) + pibonatchi(num-1);
}
int main() {
    int num;
    scanf("%d",&num);
    printf("%d",pibonatchi(num));
}

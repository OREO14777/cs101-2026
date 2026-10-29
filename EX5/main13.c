#include <stdio.h>
int multi(int i, int j){
    if (j == 1){
        printf(" %2d * %d = %2d ", i, j, i * j);
        return 0;
    }else{
        multi(i, j - 1);
        printf(" %2d * %d = %2d", i, j, i * j);
    }
}

int main(){
    for (int r = 1; r < 10; r++){
        multi(r, 9);
        printf("\n");
    }
    return 0 ;
}

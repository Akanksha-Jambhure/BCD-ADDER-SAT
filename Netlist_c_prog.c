#include <stdio.h>

void andgate(int x1, int x2, int x3);
void orgate(int x1, int x2, int x3);
void xorgate(int x1, int x2, int x3);
void notgate(int x1, int x2);
int main() {
    // Write C code here
    return 0;
}

// AND GATE
void andgate(int x1, int x2, int x3) {
    // printf("c nvars nclauses\np cnf 3 3\n");
    printf("%d %d 0 \n", x1, -x3);
    printf("%d %d 0 \n", x2, -x3);
    printf("%d %d %d 0 \n", -x1, -x2, x3);
}

// OR GATE
void orgate(int x1, int x2, int x3) {
    // printf("c nvars nclauses\np cnf 3 3\n");
    printf("%d %d 0 \n", -x1, x3);
    printf("%d %d 0 \n", -x2, x3);
    printf("%d %d %d 0 \n", x1, x2, -x3);
}

//  NOT GATE
void notgate(int x1, int x2) {
    // printf("c nvars nclauses\np cnf 2 2\n");
    printf("%d %d 0 \n", x1, x2);
    printf("%d %d 0 \n", -x1, -x2);
}

// XOR GATE
void xorgate(int x1, int x2, int x3) {
    // printf("c nvars nclauses\np cnf 3 4\n");
    printf("%d %d %d 0 \n", x1, x2, -x3);
    printf("%d %d %d 0 \n", x1, -x2, x3);
    printf("%d %d %d 0 \n", -x1, x2, x3);
    printf("%d %d %d 0 \n", -x1, -x2, -x3);
}

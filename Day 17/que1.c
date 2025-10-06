#include <stdio.h>

findCube() {
    int num, Cube;
    printf("Enter any number: ");
    scanf("%d", &num);
    Cube = num * num * num;
    printf("Cube is: %d\n", Cube);
}

int main() {
    findCube();
    
}

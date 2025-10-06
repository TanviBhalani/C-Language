#include <stdio.h>
void main ()
{
    char c;
    printf("Which Holiday is on 27th August ? \n");
    printf("A - Diwali  \n");
    printf("B- Holi  \n");
    printf("C - Navratri  \n");
    printf("D - Ganesh Chaturthi  \n");
    printf("Tell me your answer ?  \n");
    scanf("%c", &c);

    switch (c)
    {
        case 'A' : printf("Wrong Answer");
        break;
        case 'B' : printf("Wrong Answer");
        break;
        case 'C' : printf("Wrong Answer");
        break;
        case 'D' : printf("Correct Answer");
        break;
    }

}
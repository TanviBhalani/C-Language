#include<stdio.h>

main(){

    char alphabet;

    printf("Enter a alphabet: ");
    scanf("%c", &alphabet);

    switch(alphabet) 
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
      

            printf("%c is a vowel.\n", alphabet);
            break;

    default:
            printf("%c is a consonant.\n", alphabet);

    }

   
}

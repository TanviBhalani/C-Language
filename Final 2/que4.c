#include<stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);


  
    char c = (ch);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
    {
        printf("The alphabet %c is a vowel.\n", ch);
    } 
    else if ((c >= 'a' && c <= 'z')) 
    {
        printf("The alphabet %c is a consonant.\n", ch);
    } 
    else 
    {
        printf("The character %c is not an alphabet.\n", ch);
    }

}


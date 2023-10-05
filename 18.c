
#include <stdio.h>
int main() {
    char ch ;
    printf("Enter a character : ")
    scanf("%c",&ch)
    switch (ch) {
    case 'a':
        printf("The character %c is a vowel.\n", ch);
        break;
    case 'A':
        printf("The character %c is a vowel.\n", ch);
        break;
    case 'e':
        printf("The character %c is a vowel.\n", ch);
        break;
    case 'E':
        printf("The character %c is a vowel.\n", ch);
        break;
    case 'i':
        printf("The character %c is a vowel.\n", ch);
        break;
    case 'I':
        printf("The character %c is a vowel.\n", ch);
        break;
    case 'o':
        printf("The character %c is a vowel.\n", ch);
        break;
    case 'O':
        printf("The character %c is a vowel.\n", ch);
        break;
    case 'u':
        printf("The character %c is a vowel.\n", ch);
        break;
    case 'U':
        printf("The character %c is a vowel.\n", ch);
        break;

    default:
        printf("The character %c is a consonant.\n", ch);
    }
    return 0;
}

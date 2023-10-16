#include <stdio.h>
#include <ctype.h> 

#define N 50

int main(void) {
    char input[N] = {'\0'};

    printf("Enter a message: ");
    scanf("%[^\n]", input);

    for (size_t i = 0; i < N && input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i] - 'a' + 'A';
        }
    }

    for (size_t i = 0; i < N; i++) {
        switch (input[i]) {
        case 'E':
            printf("3");
            break;
        
        case 'A':
            printf("4");
            break;

        case 'B':
            printf("8");
            break;

        case 'O':
            printf("0");
            break;

        case 'S':
            printf("5");
            break;

        case 'I':
            printf("1");
            break;
        default:
            printf("%c", input[i]);
            break;
        }
    }

    printf("!!!!!!!!!!\n");
    
    return 0;
}
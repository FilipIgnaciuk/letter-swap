#include <iostream>
#include "text.h"

void menu(void) {
    printf("1. Enter text\n");
    printf("2. Display text\n");
    printf("3. Determine the length of text\n");
    printf("4. Change text to small letters\n");
    printf("5. Change text to big letters\n");
    printf("0. EXIT\n");
    printf("Select an option:\n");
}

int main() {

    char text[80] = "";

    int option = 0;

    do {
        menu();
        scanf("%d", &option);
        clear();
        switch(option){
            case 0:
                break;
            case 1:
                printf("Entering text \n");
                enterText(text);
                break;
            case 2:
                printf("Displaying text \n");
                printText(text);
                break;
            case 3:
                printf("Displaying Length of test = %d\n", textLenght(text));
                break;
            case 4:
                lowerCase(text);
                break;
            case 5:
                upperCase(text);
                break;
            default:
                printf("Enter right number\n");
        }
    }
    while(option!=0);
    printf("END!");

    return 0;
}

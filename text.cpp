#include <iostream>
#include "text.h"

void enterText(char *text){
    printf("Enter text: \n");
    gets(text);
}

void printText(char *text){
    printf("%s\n", text);
}

int textLenght(char *text){
    int counter = 0;
    while( *(text + counter) ){
        counter++;
    }
    return counter;
}

void clear(void) {
    while (getchar() != '\n');
}

void lowerCase(char *text)
{
    while (*text)
    {
        if ('A' <= *text && *text <= 'Z')
        {
            *text += ('a' - 'A');
        }
        text++;

    }
}

void upperCase(char *text)
{
    while (*text)
    {
        if ('a' <= *text && *text <= 'z')
        {
            *text -= ('a' - 'A');
        }
        text++;
    }
}

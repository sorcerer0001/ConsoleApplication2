#include<iostream>
#include<string.h>
using namespace std;

void changeCharOrder(char* str) 
{
    // print whitespace
    while (*str && *str == ' ')
        putchar(*str++);
    if (!(*str))
        return;

    // print the reversed word
    char *next = str;
    while (*next && *next != ' ') 
        next++;
    char *end = next - 1;
    while (end != str - 1)
        putchar(*end--);

    // handle next word
    changeCharOrder(next);
}

int main() {
    char c[500]= { '\0' };
    cin.getline(c,500);

    changeCharOrder(c);
    return 0;
}

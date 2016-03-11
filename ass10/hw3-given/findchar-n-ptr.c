/* findchar.c - find the number of occurances of a character in a string */

#include <stdio.h>
#include <string.h>
#include <assert.h>

int findchar(char *s, char c)
{
    int count = 0;
    
    while (*s != '\0') {
        if (*s == c) {
            count++;
        }
        s = s + 1;
    } 

    return count;
}


int main(void)
{
    char *s = "This is a test of our new findchar function\n";
    
    printf("Number of 'i's: %d\n", findchar(s, 'i'));
    
    return 0;
}
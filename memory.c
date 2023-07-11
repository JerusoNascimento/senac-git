#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
//usando malloc para alocar memoria
    char *s = malloc(4);
    s[0] = 'H';
    s[1] = 'I';
    s[2] = '!';
    s[3] = '\0';
    printf("%s\n", s);
    
//liberando memory with 'free'
    free(s);
}
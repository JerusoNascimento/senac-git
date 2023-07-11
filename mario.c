#include <stdlib.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int height;
    printf("Digite a Height: ");
    scanf("%i",&height);
    draw(height);
}

void draw(int h)
{
    for(int i = 1; i <= h; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
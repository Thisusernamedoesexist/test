// Prints an n-by-n grid of bricks with a loop

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int input;
//    int mellomrom = input;
    string space =" ";
    string hash = "#";
    do
    {
        input = get_int("Size: ");
    }
    while (input < 1 || input > 8);

    if (input > 1 || input < 8){
        for (int x = 0; x < input; x++)
        {
            for (int y = 0; y < x+1; y++)
            {  
                for (int i = 0; i < input; i++)
                {
                printf("%s", space);
                }       
            printf("%s", hash);
            input = input - 1;
            }
        printf("\n");
        }
    }
}

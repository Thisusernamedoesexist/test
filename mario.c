// Prints an n-by-n grid of bricks with a loop

#include <cs50.h>
#include <stdio.h>

// Operator
int main(void)
{
    int input;              // input from user
    int controlSpace = -1;  // controls amount of spaces per line
    bool spaceCheck = true; // checks wether space if loop is allowed to write
    string space =" ";      // Placeholder for 'space' symbol
    string hash = "#";      // Placeholder for 'hashtag' symbol
    
    // Waiting for user input, repromt user if value below 1 or above 8.
    do {
    input = get_int("Size: ");
    }
    while (input < 1 || input > 8);

    // Initiating loops if input is valid
    if (input > 1 || input < 8)
    {
        // Writes new lines and enables spacecheck for additional loops
        for (int x = 0; x < input; x++)
        {
            // Writes hashtags and disables further writing of spaces in between hashtags
            for (int y = 0; y <= x; y++)
            {
                // Writes spaces at the start of each loop equivalent to user input
                if (spaceCheck == true)
                {
                    for (int i = 0; i < controlSpace+input; i++)
                        {
                        printf("%s", space);
                        }
                spaceCheck = false;
                }
            printf("%s", hash);     
            }
        printf("\n");
        spaceCheck = true;
        controlSpace--;
        }
    }
}

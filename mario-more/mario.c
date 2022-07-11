#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height, row, column, space;


    {
        // get input for height
        do
        {
            height = get_int("Height: ");


            // make sure height is between 1 and 8
        }
        while (height < 1 || height > 8);

        // print pyramid height
        for (row = 0; row < height; row++)
        {
            // print pyramid columns
            for (column = 0; column < height + row + 3; column++)
            {
                if (column == height || column == height + 1 || row + column < height - 1)
                    printf(" ");
                else
                    printf("#");
            }
            printf("\n");
        }
    }
}
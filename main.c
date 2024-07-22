#include <unistd.h>
#define SIZE 4

int    main(void)
{
    int    rows;
    int    cols;
    char numbers[SIZE][SIZE] = {{'1', '2', '3', '4'}, {'2', '4', '1', '3'}, {'3', '1', '4', '2'}, {'4', '3', '2', '1'}};

    rows = 0;
while (rows < SIZE)
    {
        cols = 0;
        while (cols < SIZE)
            {
                write(1, &numbers[rows][cols], 1);
                write(1, " ", 1);
                cols++;
            }
        write(1, "\n", 1);
        rows++;
    }
    return (0);
}
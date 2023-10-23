#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int n;
    printf("Enter the order of the magic square (odd number): \n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The order of the magic square must be odd.\n");
        return 1;
    }

    int maxNum = n * n;
    int row = 0;
    int col = n / 2;

    for (int num = 1; num <= maxNum; num++)
    {
        gotoxy(col * 4, row * 2);
        printf("%d", num);
        Sleep(500);

        row--;
        col++;

        if (num % n == 0)
        {
            row += 2;
            col--;
        }
        else
        {
            if (row < 0)
                row = n - 1;
            if (col == n)
                col = 0;
        }
    }

    return 0;
}

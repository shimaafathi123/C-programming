#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct student {
    char name[50];
    int age;
    int id;
    char gender;
};

void insert(struct student students[], int count) {
    if (count < 100) {
        printf("Enter name: ");
        scanf(" %[^\n]s", students[count].name);
        printf("Enter age: ");
        scanf("%d", &students[count].age);
        printf("Enter ID: ");
        scanf("%d", &students[count].id);
        printf("Enter Gender : ");
        scanf(" %c", &students[count].gender);

        printf("Student added.\n");
    } else {
        printf("You can't add more than 100 students.\n");
    }
}

void display(struct student students[], int count) {
    if (count > 0) {
        printf("Student Records:\n");
        for (int i = 0; i < count; i++) {
            printf("Name: %s, Age: %d, ID: %d, Gender: %c\n",
                students[i].name,
                students[i].age,
                students[i].id,
                students[i].gender
            );
        }
    } else {
        printf("No student records to display.\n");
    }
}

void SetColor(int ForgC) {
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi)) {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

void gotoxy(int x, int y) {
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int choice = 0;
    int studentCount = 0;
    struct student students[100];

    while (1) {
        system("cls");

        gotoxy(1, 1);
        if (choice == 0) {
            SetColor(12);
        } else {
            SetColor(15);
        }
        printf("1. New");

        gotoxy(1, 2);
        if (choice == 1) {
            SetColor(12);
        } else {
            SetColor(15);
        }
        printf("2. Display");

        gotoxy(1, 3);
        if (choice == 2) {
            SetColor(12);
        } else {
            SetColor(15);
        }
        printf("3. Exit");

        SetColor(15);
        gotoxy(1, 4);
        printf("Enter your choice: ");
        int key = _getch();

        if (key == 224) {
            key = _getch();
            if (key == 80) {
                choice = (choice + 1) % 3;
            } else if (key == 72) {
                choice = (choice - 1 + 3) % 3;
            }
        } else if (key == 13) {
            if (choice == 0) {
                insert(students, studentCount);
                studentCount++;
            } else if (choice == 1) {
                display(students, studentCount);
                printf("Press Enter to continue...");
                while (_getch() != 13);
            } else if (choice == 2) {
                break;
            }
        }
    }

    return 0;
}

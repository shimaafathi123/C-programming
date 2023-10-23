#include <stdio.h>
#include <conio.h>
#include <windows.h>

void SetColor(int ForgC) {
      WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi)) {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

// differnt array of datatypes for students.
struct student {
    char name[50];
    int age;
    int id;
    char gender;
};
// insert students records
// binding in array
void insert(struct student students[], int count) {
    if (count < 100) {
        printf("Enter name: ");
        scanf("%[^\n]s", students[count].name);//already an address to memory.
        printf("Enter age: ");
        scanf("%d", &students[count].age);
        printf("Enter ID: ");
        scanf("%d", &students[count].id);
        printf("Enter Gender (M/F): ");
        scanf(" %c", &students[count].gender);

        printf("Student added.\n");
    } else {
        printf("you can't add more than 100.\n");
    }
}
//display students records
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

void gotoxy(int x, int y) {
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int choice = 1;
    char key;
    int numItems = 3; // Number of menu items
    int count = 0;    // Initialize the count of student records

    struct student students[100]; // Array of student records

    while (1) {
        system("cls"); // Clear the screen

        printf("Main Menu:\n\n");

        for (int i = 1; i <= numItems; i++) {
            if (i == choice) {
                SetColor(4); // Red for selected item
                printf("-> ");
            } else {
                SetColor(15); // White for unselected items
                printf("   ");
            }

            if (i == 1) {
                printf("New\n");
            } else if (i == 2) {
                printf("Display\n");
            } else if (i == 3) {
                printf("Exit\n");
            }
        }

        key = getch(); // Get a character from the user

        switch (key) {
            case 72: // Up arrow key
                choice--;
                if (choice < 1) choice = numItems;
                break;
            case 80: // Down arrow key
                choice++;
                if (choice > numItems) choice = 1;
                break;
            case 13: // Enter key
                system("cls"); // Clear the screen
                printf("You selected: ");
                if (choice == 1) {
                    printf("New\n");
                    insert(students, count); // Call the insert function----<
                    count++; // Increment the count of students
                } else if (choice == 2) {
                    printf("Display\n");
                    display(students, count); // Call the display function----<
                } else if (choice == 3) {
                    printf("Exit\n");
                    exit(0);
                }
                printf("Press Enter to continue...");
                getch(); // Wait for the user to press Enter
                break;
        }
    }

    return 0;
}

#include <stdio.h>
#include <conio.h>

#define ROW 30
#define COL 30
int a[ROW][COL], b[ROW][COL], c[ROW][COL];

void add();
void sub();
void mul();
void displayArray();
void menu();
void scanarray();

int main() {
    int i, j, k;
    int choice;
    
    scanarray();
    displayArray();
    while (1) {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 7:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void menu() {
    printf("\nMenu:\n");
    printf("1. Add \n");
    printf("2. Subtract two matrices\n");
    printf("3. Multiply two matrices\n");
    printf("4. divide two matrices\n");
    printf("5. sort two matrices\n");
    printf("6. search two matrices\n");
    printf("7. Exit\n");
}   

void scanarray() {
    int i, j;
    printf("Enter elements of first matrix (%d x %d):\n", ROW, COL);
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix (%d x %d):\n", ROW, COL);
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &b[i][j]);
        }
    }
}

void add() {
    printf("Matrix addition selected.\n");
}

void sub() {
    printf("Matrix subtraction selected.\n");
}

void mul() {
    printf("Matrix multiplication selected.\n");
}

void displayArray() {
    printf("Matrix display selected.\n");
}
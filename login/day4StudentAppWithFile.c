#include <stdio.h>
#include <conio.h>

#define SIZE 5
struct Student
{
    int StudentID;
    char Name[25];
    float Fees;
}//end of struct student
s{SIZE};
void scanStudentDetails();
void displayStudentDetails();
void maun()
{
    FILE *fp;
    struct Student t;
    char fileName[30];
    int i;
    printf("Enter file name to store student details: ");
    gets(fileName);
    fp = fopen(fileName, "w+");
    scanStudentDetails();
    for(i=0;i<SIZE;i++)
    {
        fwrite(&s[i], sizeof(s[i]), 1, fp);
    }//end of for
    fseek(fp, 0, SEEK_SET);// for changing file pointer to start
    printf("\nStudent details stored successfully in file %s", fileName);
    for(i=0;i<SIZE;i++)
    {
        fread(&t,sizeof(t),1,fp);
        displayStudentDetails(t);
    }//end of for
}//end of main
void scanStudentDetails()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter details of student %d", i+1);
        printf("\nEnter Student ID: ");
        scanf("%d",&s[i].StudentID);
        fflush(stdin);
        printf("Enter Name: ");
        gets(s[i].Name);
        printf("Enter Fees: ");
        scanf("%f",&s[i].Fees);
    }//end of for
}//end of scanStudentDetails
void displayStudentDetails(struct Student t)
{
    printf("\nStudent ID: %d", t.StudentID);
    printf("\nName: %s", t.Name);
    printf("\nFees: %.2f", t.Fees);
}//end of displayStudentDetails
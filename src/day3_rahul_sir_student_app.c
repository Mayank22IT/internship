#include <stdio.h>
#include <conio.h>
struct Student
{
    int rollno;
    char name[50];
    int std;
    int marks;
};// end of struct
#define SIZE 1000

struct Student srecord[SIZE];
int index = 0, rollno=1;
void printStudent(struct Student s);
void addStudent()
{
    struct Student s;
    if(index==SIZE)
    {
        printf("\nStudent record full");
        return;
    }//end of if
    s.rollno = rollno;
    flushall();
    printf("\nEnter name: ");
    gets(s.name);
    printf("Enter standard: ");
    scanf("%d",&s.std);
    printf("Enter marks: ");
    scanf("%d",&s.marks);
    s.active = 1;
    srecords[index] = s;

    index++;
    rollno++;
    printf("\nStudent added successfully"); 
}//end of addStudent
void displayAllStudents()
{
    int i;
    if(index==0)
    {
        printf("\nNo student records found");
        return;
    }
    for(i=0;i<index;i++)
    {
        if(srecords[i].active==1)
        {
            printStudent(srecords[i]);
        }//end of if
    }//end of for
}//end of displayAllStudents
void deleteStudent()
{
    int rno, i, found=0;
    if(index==0)
    {
        printf("\nNo student records found");
        return;
    }
    printf("\nEnter roll number to delete: ");
    scanf("%d",&rno);
    for(i=0;i<index;i++)
    {
        if(srecords[i].rollno==rno && srecords[i].active==1)
        {
            srecords[i].active=0;
            found=1;
            printf("\nStudent record deleted successfully");
            break;
        }//end of if
    }//end of for
    if(found==0)
    {
        printf("\nStudent record not found");
    }
}//end of deleteStudent
void searchStudentById()
{
    int i,rollno,found=1;
    printf("\nEnter roll number to search: ");
    scanf("%d",&rollno);

    for(i=0;i<index;i++)
    {
        if(srecords[i].rollno==rollno && srecords[i].active==1)
        {
            printStudent(srecords[i]);
            found=1;
            break;
        }//end of if
    }//end of for
}
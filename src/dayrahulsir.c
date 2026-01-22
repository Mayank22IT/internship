#include <stdio.h>
#include <conio.h>

struct Student
{
    int rollno;
    char name[50];
    int std;
    int marks;
}// end of struct

void main()
{
    struct Student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        s[i] = scanData(s[i]);
    
    }
    for (i=0;i<3;i++)
    {
        displayData(s[i]);
    }
}//end of main
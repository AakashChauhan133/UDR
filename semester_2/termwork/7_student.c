/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Create a structure to specify data on students given below: Roll number, Name, Department, Course, Year of joining Assume that there are not more than 450 students in the college.
    (a) Write a function to print names of all students who joined in a particular year.
    (b) Write a function to print the data of a student whose roll number is given.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[50];
    char dep[50];
    char course[50];
    int year;
};
void find_year(struct student[], int, int);
void find_roll(struct student[], int, int);
int main()
{
    struct student s[450];
    int n = 3;
    int y, r;
    // Input Section
    printf("\n/********** Input**********/\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data of student %d\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Year of joining: ");
        scanf("%d", &s[i].year);
        getchar();
        printf("Name: ");
        gets(s[i].name);
        printf("Department: ");
        gets(s[i].dep);
        printf("Course: ");
        gets(s[i].course);
    }

    printf("\n/********** OUTPUT **********/\n");
    printf("Enter the year of joining to search: ");
    scanf("%d", &y);
    find_year(s, n, y);
    printf("Enter the roll number to search: ");
    scanf("%d", &r);
    find_roll(s, n, r);

    return 0;
}

void find_year(struct student s[], int n, int y)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (y == s[i].year)
            count++;
    }
    printf("Total number of students joinded in year %d is %d \n", y, count);
}
void find_roll(struct student s[], int n, int r)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (r == s[i].roll)
            printf("Name: %s\nRoll: %d\nDepartment: %s\nCourse: %s\nYear of Joining: %d\n", s[i].name, s[i].roll, s[i].dep, s[i].course, s[i].year);
    }
}
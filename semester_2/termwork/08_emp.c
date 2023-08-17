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

struct emp
{
    char name[100];
    int id;
    char add[100];
};

int main()
{
    int n, t;
    struct emp e[10];
    char t1[100], t2[100];
    printf("Enter the number of employies: ");
    scanf("%d", &n);

    // Input Section
    printf("\n/********** Input**********/\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of emp %d\n", i + 1);
        printf("Enter first name: ");
        scanf("%s", e[i].name);
        printf("Enter id: ");
        scanf("%d", &e[i].id);
        getchar();
        printf("Enter address: ");
        gets(e[i].add);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(e[j].name, e[j + 1].name) > 0)
            {
                strcpy(t1, e[j].name);
                strcpy(t2, e[j].add);
                t = e[j].id;
                strcpy(e[j].add, e[j + 1].add);
                strcpy(e[j].name, e[j + 1].name);
                e[j].id = e[j + 1].id;
                strcpy(e[j + 1].add, t2);
                strcpy(e[j + 1].name, t1);
                e[j + 1].id = t;
            }
        }
    }

    printf("\n/********** OUTPUT **********/\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nName: %s\nID: %d\nAddress: %s\n", e[i].name, e[i].id, e[i].add);
    }
    return 0;
}
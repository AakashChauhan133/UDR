/*
 *  Name: Aakash
 *  University Roll No: 2021931
 *  Section: M
 *  Write a C program to create a structure containing book information like accession number, name of author, book title and flag to know whether book is issued or not.
    Create a menu in which the following can be done.
    1 - Display book information
    2 - Add a new book
    3 - Display all the books in the library of a particular author
    4 - Display the number of books of a particular title
    5 - Display the total number of books in the library
    6 - Issue a book
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book
{
    int number;
    char title[100];
    char auth[100];
    int flag;
};

void display(struct book[], int);
void add_new(struct book[], int *);
void display_auth(struct book[], int);
void display_title(struct book[], int);
void total(struct book[], int);
void issue(struct book[], int);

int main()
{
    struct book b[100];
    int ch, n = 0;
    char c;
    do
    {
        printf("/*** MENU ***/\n");
        printf("1. Display Book information\n");
        printf("2. Add a new book\n");
        printf("3. Display all the books in the library of a particular author\n");
        printf("4. Display the number of books of a particular title\n");
        printf("5. Display the total number of books in the library\n");
        printf("6. Issue a book\n");
        printf("7. Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display(b, n);
            break;

        case 2:
            add_new(b, &n);
            break;

        case 3:
            display_auth(b, n);
            break;

        case 4:
            display_title(b, n);
            break;

        case 5:
            total(b, n);
            break;

        case 6:
            issue(b, n);
            break;

        case 7:
            exit(0);
            break;

        default:
            printf("INVALID CHOICE ...\n");
            break;
        }
    } while (ch != 7);

    return 0;
}

void display(struct book b[], int n)
{
    int num;
    printf("Enter the accession number: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (b[i].number == num)
        {
            printf("**** Book details ****\n");
            printf("\nAcc Number %d\nTitle: %s\nAuthor: %s\nFlag: %d\n\n", b[i].number, b[i].title, b[i].auth, b[i].flag);
            return;
        }
    }
    printf("*** No Book found ***\n\n");
}

void add_new(struct book b[], int *n)
{
    int number;
    char author[100], title[100];
    printf("Enter the acc numebr: ");
    scanf("%d", &number);
    getchar();
    printf("Enter the Title: ");
    gets(title);
    printf("Enter the name of author: ");
    gets(author);
    getchar();

    for (int i = 0; i < *n; i++)
    {
        if (b[i].number == number)
        {
            b[i].flag = 1;
            return;
        }
    }
    strcpy(b[*n].auth, author);
    strcpy(b[*n].title, title);
    b[*n].number = number;
    b[*n].flag = 1;
    *n = *n + 1;
}
void display_auth(struct book b[], int n)
{
    getchar();
    char author[100];
    printf("Enter the name of author: ");
    gets(author);
    int f = 1;

    for (int i = 0; i < n; i++)
    {
        if (!strcmpi(author, b[i].auth))
        {
            f = 0;
            printf("**** Book details ****\n");
            printf("\nAcc Number %d\nTitle: %s\nAuthor: %s\nFlag: %d\n\n", b[i].number, b[i].title, b[i].auth, b[i].flag);
        }
    }
    if (f)
        printf("*** No Book found ***\n\n");
}

void display_title(struct book b[], int n)
{
    getchar();
    char title[100];
    printf("Enter the title of book: ");
    gets(title);
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        if (!strcmpi(title, b[i].title))
        {
            f += b->flag;
        }
    }
    printf("Number of Books of title %s is %d\n\n", title, f);
}

void total(struct book b[], int n)
{
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        f += b[i].flag;
    }
    printf("Number of Books in library is %d\n\n", f);
}

void issue(struct book b[], int n)
{
    getchar();
    char author[100], title[100];
    printf("Enter the name of author: ");
    gets(author);
    printf("Enter the name of title: ");
    gets(title);

    for (int i = 0; i < n; i++)
    {
        if (!strcmpi(author, b[i].auth) && !(strcmpi(title, b[i].title)))
        {
            printf("**** Book details ****\n");
            printf("\nAcc Number %d\nTitle: %s\nAuthor: %s\nFlag: %d\n\n", b[i].number, b[i].title, b[i].auth, b[i].flag);
            if (b[i].flag == 0)
                printf("Book alreay issued (Not avilable)\n");
            if (b[i].flag == 1)
            {
                b[i].flag = 0;
                printf("Issued succesfully\n");
            }

            return;
        }
    }
    printf("*** No Book found ***\n\n");
}
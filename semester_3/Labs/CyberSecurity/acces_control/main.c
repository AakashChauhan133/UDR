/*
 *	Author	:	Aakash Chauhan
 *	Date	:	8 August, 2023
 *	Implimentation of User access matrix using files
 */


/*
	0 = read
	1 = write
	2 = execute
	3 = r + w
	4 = r + e
	5 = w + e
	6 = r + w + e = super user
	-1 = no access
*/

#include <stdio.h>
#include <stdlib.h>

void selectfile(char *, int);
void read(char *);
void write(char *);
void execute(char *);

int main()
{
	FILE *f;

	char s[10] = "filex.txt", mode;
	int user = -1, file = -1;
	int access[10][10] = {{0, 1, 2, -1, -1, -1, -1, -1, -1, -1},
						  {-1, 0, 1, 2, -1, -1, -1, -1, -1, -1},
						  {-1, -1, 0, 1, 2, -1, -1, -1, -1, -1},
						  {-1, -1, -1, 0, -1, -1, -1, -1, -1, -1},
						  {6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
						  {6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
						  {-1, -1, -1, -1, -1, -1, 1, 1, -1, -1},
						  {6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
						  {0, 0, 0, 0, 0, 2, 2, 2, 2, 2},
						  {3, 3, 3, 3, 2, 2, 2, 2, 2, 2}};
	printf("Enter the user ID: ");
	scanf("%d", &user);
	printf("Enter the file number to access: ");
	scanf("%d", &file);
	selectfile(s, file);

	if (access[user - 1][file - 1] == -1)
	{
		printf("No Access\n");
	}

	else if (access[user - 1][file - 1] == 0)
	{
		printf("Read Access\n");
		read(s);
	}
	else if (access[user - 1][file - 1] == 1)
	{
		printf("Write Access\n");
		write(s);
	}
	else if (access[user - 1][file - 1] == 2)
	{
		printf("Execute Access\n");
		execute(s);
	}
	else if (access[user - 1][file - 1] == 3)
	{
		printf("Read + Write Access\n");
		printf("Select the mode (r, w): ");
		getchar();
		scanf("%c", &mode);
		if (mode == 'r')
		{
			read(s);
		}
		else if (mode == 'w')
		{
			write(s);
		}
	}
	else if (access[user - 1][file - 1] == 4)
	{
		printf("Read + Execute Access\n");
		printf("Select the mode (r, e): ");
		getchar();
		scanf("%c", &mode);
		if (mode == 'r')
		{
			read(s);
		}
		else if (mode == 'e')
		{
			execute(s);
		}
	}
	else if (access[user - 1][file - 1] == 5)
	{
		printf("Write + Execute Access\n");
		printf("Select the mode (w, e): ");
		getchar();
		scanf("%c", &mode);
		if (mode == 'e')
		{
			execute(s);
		}
		else if (mode == 'w')
		{
			write(s);
		}
	}
	else if (access[user - 1][file - 1] == 6)
	{
		printf("Super User Access\n");
		printf("Select the mode (r, w, e): ");
		getchar();
		scanf("%c", &mode);
		if (mode == 'r')
		{
			read(s);
		}
		else if (mode == 'w')
		{
			write(s);
		}
		else if (mode == 'e')
		{
			execute(s);
		}
	}

	return 0;
}

void read(char *s)
{
	char ch;
	FILE *f;

	f = fopen(s, "r");
	if (!f)
	{
		printf("Error\n");
		exit(0);
	}
	printf("\n\nContent in file\n");
	while ((ch = fgetc(f)) != EOF)
	{
		printf("%c", ch);
	}
	fclose(f);
}

void write(char *s)
{
	// Write text in file and preview of enterd text
	char ch;
	FILE *f;

	f = fopen(s, "w");
	if (!f)
	{
		printf("Error\n");
		exit(0);
	}
	printf("Write the content\n");
	while ((ch = getchar()) != EOF)
	{
		fputc(ch, f);
	}
	fclose(f);
	read(s);
}

void execute(char *s)
{
	printf("Feature Not Avialable\n");
	return;
}

void selectfile(char *s, int id)
{
	/*
		This funtion take a dummy name as string and file id
		and inset id before the extention of file 
		eg: 
			input	:	s[] = "filex.txt"	id = 1
			output	:	s[] = "file1.txt"
		
		This function helps to open multiple files just by entering file id (eg: 1, 2, 3, ...)
	*/
	int i;
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '.')
		{
			s[i - 1] = id + 48;
			return;
		}
	}
}

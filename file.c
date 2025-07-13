// declaring a file pointer//
#include <stdio.h>

int main()
{
    FILE *fptr;
    return 0;
}
// opening a file//
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    return 0;
}

// closing a file//
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    fclose(fptr);
    return 0;
}

// check a file exist or not//
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("NewTest.txt", "r");
    if (fptr == NULL)
    {
        printf("file doesn't exist\n");
    }
    else
    {
        fclose(fptr);
    }
    return 0;
}

// creating  a file //
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("program.txt", "w");

    fclose(fptr);

    return 0;
}

// reading  a file // char
#include <stdio.h>
int main()
{

    FILE *fptr;

    fptr = fopen("Test.txt", "r");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fclose(fptr);

    return 0;
}

/*character = a
character = p
character = p
character = l
character = e*/

// reading  a file // int
#include <stdio.h>
int main()
{

    FILE *fptr;

    fptr = fopen("New.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);
    printf("number = %d\n", num);

    fscanf(fptr, "%d", &num);
    printf("number = %d\n", num);

    fscanf(fptr, "%d", &num);
    printf("number = %d\n", num);

    fclose(fptr);

    return 0;
}

/*number = 123
number = 456
number = 789*/

// writing  a file //
#include <stdio.h>
int main()
{

    FILE *fptr;

    fptr = fopen("Test.txt", "w");
    char ch;

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);

    return 0;
}

// apple overwritten by MANGO inside Test.txt file//

// append  a file //
#include <stdio.h>
int main()
{

    FILE *fptr;

    fptr = fopen("Test.txt", "a");
    char ch;

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);

    return 0;
}
// appleMANGO in Test.txt file//

// use of getc
// reading  a file // char
#include <stdio.h>
int main()
{

    FILE *fptr;

    fptr = fopen("Test.txt", "r");

    printf("character = %c\n", fgetc(fptr));
    printf("character = %c\n", fgetc(fptr));
    printf("character = %c\n", fgetc(fptr));
    printf("character = %c\n", fgetc(fptr));
    printf("character = %c\n", fgetc(fptr));

    fclose(fptr);

    return 0;
}
/*character = a
character = p
character = p
character = l
character = e*/

// use of putc
// writing  a file //
#include <stdio.h>
int main()
{

    FILE *fptr;

    fptr = fopen("Test.txt", "w");

    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);

    fclose(fptr);

    return 0;
}

// apple overwritten by MANGO inside Test.txt file//

// use of putc
// append  a file //
#include <stdio.h>
int main()
{

    FILE *fptr;

    fptr = fopen("Test.txt", "a");

    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);

    fclose(fptr);

    return 0;
}
// appleMANGO in Test.txt file//

// EOF
#include <stdio.h>
int main()
{

    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}
// This is a random string of words.

// READ 5 INTEGERS FROM A FILE//
#include <stdio.h>
int main()
{

    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    int num;
    fscanf(fptr, "%d\n", &num);
    printf("number is =%d\n", num);

    fscanf(fptr, "%d\n", &num);
    printf("number is =%d\n", num);

    fscanf(fptr, "%d\n", &num);
    printf("number is =%d\n", num);

    fscanf(fptr, "%d\n", &num);
    printf("number is =%d\n", num);

    fscanf(fptr, "%d\n", &num);
    printf("number is =%d\n", num);

    fclose(fptr);
    return 0;
}
/*number is =1
number is =2
number is =3
number is =4
number is =5*/

// input student information from a user & enter it to file//
#include <stdio.h>
int main()
{

    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name:");
    scanf("%s", name);
    printf("enter age:");
    scanf("%d", &age);
    printf("enter cgpa:");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name is =%s\n", name);

    fprintf(fptr, "student age is =%d\n", age);

    fprintf(fptr, "student cgpa is =%f\n", cgpa);

    fclose(fptr);
    return 0;
}
/*enter name:udita
enter age:20
enter cgpa:8.55*/
// in terminal//

/*student name is =udita
student age is =20
student cgpa is =8.550000*/
// in student.txt file//

// write all the odd number from 1 to n(user given) file//
#include <stdio.h>
int main()
{

    FILE *fptr;
    fptr = fopen("ODD.txt", "w");

    int num;

    printf("enter number:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
            fprintf(fptr, "odd numbers are is =%d\n", i);
    }
    fclose(fptr);
    return 0;
}

/*enter number:45*/ // in ODD.txt file//
/*odd numbers are is =1
odd numbers are is =3
odd numbers are is =5
odd numbers are is =7
odd numbers are is =9
odd numbers are is =11
odd numbers are is =13
odd numbers are is =15
odd numbers are is =17
odd numbers are is =19
odd numbers are is =21
odd numbers are is =23
odd numbers are is =25
odd numbers are is =27
odd numbers are is =29
odd numbers are is =31
odd numbers are is =33
odd numbers are is =35
odd numbers are is =37
odd numbers are is =39
odd numbers are is =41
odd numbers are is =43
odd numbers are is =45*/

// 2 numbers a&b,are written in a file.Replace them with their sum//
#include <stdio.h>
int main()
{

    FILE *fptr;
    fptr = fopen("New.txt", "r");
    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    printf(" number: %d\n%d", a, b);
    fclose(fptr);

    fptr = fopen("New.txt", "w");
    int sum = a + b;
    fprintf(fptr, "total sum is %d\n", sum);
    fclose(fptr);
    return 0;
}
/*number 2
3*/
/*total sum is : 5*/
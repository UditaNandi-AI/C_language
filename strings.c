// strings//
#include <stdio.h>
int main()
{
    char name[] = {'A', 'P', 'P', 'L', 'E', '\0'};
    // char name[]="APPLE";
    printf("%s", name);

    return 0;
}

// strings firstName & lastName to store details & print all char using LOOP//
// function declaration/prototype//
#include <stdio.h>
void printString(char arr[]);
int main()
{
    char firstName[] = "apple";
    char lastName[] = "pen";
    // function call//
    printString(firstName);
    printString(lastName);
    return 0;
}
// function definition//
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++) //*******/arr[i] !='\0';/
    {
        printf("%c", arr[i]);
    }
    printf("\t");
}

// strings input & output//only single world//
#include <stdio.h>
int main()
{
    char name[50];
    scanf("%s", name);
    printf("your name is:%s", name);
    return 0;
}

// strings input & output//multiple words//
#include <stdio.h>
int main()
{
    char name[50];
    gets(name); // input//
    puts(name); // output//
    return 0;
} /*wraning & output both occurred*/

// strings input & output//multiple words//
#include <stdio.h>
int main()
{
    char name[50];
    fgets(name, 100, stdin); // input//
    puts(name);              // output//

    return 0;
}

// strings using pointers//
#include <stdio.h>
int main()
{
    char *str = "Hello world";
    str = "Hello"; // reinitialisation//
    puts(str);

    return 0;
}

// string length using function//

#include <stdio.h>
int countlength(char arr[]);
int main()
{
    char name[50];
    fgets(name, 50, stdin);
    printf("length is: %d", countlength(name));
    return 0;
}

int countlength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) //*******/arr[i] !='\0';/
    {
        count++;
    }
    return count - 1;
}

// strings length//
#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    fgets(name, 50, stdin);

    name[strcspn(name, "\n")] = '\0'; //*****/

    int length = strlen(name);
    printf("length is : %zu", length);
    return 0;
}

// strings copy//
#include <stdio.h>
#include <string.h>
int main()
{
    char oldstr[] = "hello";
    char newstr[] = "world";
    strcpy(oldstr, newstr);
    puts(oldstr);
    return 0;
}

// strings concatenation//
#include <stdio.h>
#include <string.h>
int main()
{
    char firststr[100] = "hello "; // mention large size//
    char secstr[] = "world";
    strcat(firststr, secstr);
    puts(firststr);
    return 0;
}

// strings comparision//
#include <stdio.h>
#include <string.h>
int main()
{ // ascii value//
    char firststr[] = "apple";
    char secstr[] = "lemon";
    strcmp(firststr, secstr);
    printf("%d\n", strcmp(firststr, secstr));
    return 0;
} /*-1*/

// strings comparision//
#include <stdio.h>
#include <string.h>
int main()
{
    char firststr[] = "apple";
    char secstr[] = "apple";
    strcmp(firststr, secstr);
    printf("%d\n", strcmp(firststr, secstr));
    return 0;
} /*0*/

// take string input using %c//
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
}

/*Hello World
  Hello World*/

// salting concept of strings//
#include <stdio.h>
#include <string.h>
int main()
{
    char firststr[100];
    fgets(firststr, 100, stdin);
    firststr[strcspn(firststr, "\n")] = '\0'; /*remove new line if present*/
    char secstr[] = "123";                    // salt//
    strcat(firststr, secstr);
    printf("%s", firststr); // salted element//
    return 0;
} /*test
test123*/

// salting concept of strings using function//
#include <stdio.h>
#include <string.h>
void salting(char password[]);
int main()
{
    char password[100];
    scanf("%s", password);
    salting(password);
}
void salting(char password[])
{
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass, password);
    strcat(newpass, salt);
    puts(newpass);
}
/*test
test123*/

// slice concept of strings using function//
#include <stdio.h>
#include <string.h>
void slice(char str[], int n, int m);
int main()
{
    char str[] = "helloworld";

    slice(str, 3, 6);
}
void slice(char str[], int n, int m)
{
    char newstr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}

// occurence of vowels in a strings using function//
#include <stdio.h>
#include <string.h>
int countVowels(char str[]);
int main()
{
    char str[] = "helloworld";

    printf("vowels are :%d", countVowels(str));
}
int countVowels(char str[])
{

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }

    return count;
}

// check if a given character is present or not in a strings using function//
#include <stdio.h>
#include <string.h>
void checkchar(char str[], char ch);
int main()
{
    char str[] = "helloworld";
    char ch = 'h';
    checkchar(str, ch);
}
void checkchar(char str[], char ch)
{

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character is present");
            return;
        }
    }

    printf("character is not present");
}
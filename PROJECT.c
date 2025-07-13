// CALCULATOR//
#include <stdio.h>
#include <math.h>
#include <conio.h>

void home(void)
{
    printf("Home\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Remainder\n");
    printf("6. square\n");
    printf("7. cube\n");
}

void Addition(void)
{
    system("cls");
    printf("\n 1. Addition \n");
    float first_no, second_no;
    printf("\n Enter first number :");
    scanf("%f", &first_no);
    printf("\n Enter second number :");
    scanf("%f", &second_no);
    float addition = first_no + second_no;
    printf("\n %f + %f = %f", first_no, second_no, addition);
}
void Substraction(void)
{
    system("cls");
    printf("\n 2. Substraction \n");
    float first_no, second_no;
    printf("\n Enter first number :");
    scanf("%f", &first_no);
    printf("\n Enter second number :");
    scanf("%f", &second_no);
    float substraction = first_no - second_no;
    printf("\n %f - %f = %f", first_no, second_no, substraction);
}
void Multiplication(void)
{
    system("cls");
    printf("\n 3. Multiplication \n");
    float first_no, second_no;
    printf("\n Enter first number :");
    scanf("%f", &first_no);
    printf("\n Enter second number :");
    scanf("%f", &second_no);
    float Multiplication = first_no * second_no;
    printf("\n %f * %f = %f", first_no, second_no, Multiplication);
}
void Division(void)
{
    system("cls");
    printf("\n 4. Division \n");
    float first_no, second_no;
    printf("\n Enter first number :");
    scanf("%f", &first_no);
    printf("\n Enter second number :");
    scanf("%f", &second_no);
    float Division = first_no / second_no;
    printf("\n %f / %f = %f", first_no, second_no, Division);
}
void Remainder(void)
{
    system("cls");
    printf("\n 5.  Remainder\n");
    float first_no, second_no;
    printf("\n Enter first number :");
    scanf("%f", &first_no);
    printf("\n Enter second number :");
    scanf("%f", &second_no);
    float Remainder = fmod(first_no, second_no);
    printf("\n %f %% %f = %f", first_no, second_no, Remainder);
}
void Square(void)
{
    system("cls");
    printf("\n 6. Square \n");
    float num;
    printf("\n Enter  number :");
    scanf("%f", &num);

    float Square = pow(num, 2);
    printf("\n %f ^2 %f = %f", num, Square);
}
void Cube(void)
{
    system("cls");
    printf("\n 7. cube \n");
    float num;
    printf("\n Enter  number :");
    scanf("%f", &num);

    float cube = pow(num, 3);
    printf("\n %f ^3 %f = %f", num, cube);
}

int main()
{
    int Number;
    printf("\n--------CALCULATOR PROJECT---------\n");

    home();
    printf("Enter number to calculate :");
    scanf("%d", &Number);

    switch (Number)
    {
    case 1:
        Addition();
        break;
    case 2:
        Substraction();
        break;
    case 3:
        Multiplication();
        break;
    case 4:
        Division();
        break;
    case 5:
        Remainder();
        break;
    case 6:
        Square();
        break;
    case 7:
        Cube();
        break;

    default:
        printf("invalid option!\n");
        break;
    }

    getch();
    return 0;
}
/*2. Substraction
Enter first number :4
Enter second number :1.55
4.000000 - 1.550000 = 2.450000*/

/*5.Remainder
Enter first number :5
Enter second number :3
5.000000 % 3.000000 = 2.000000*/
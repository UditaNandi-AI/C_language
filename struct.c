// structure example student record store//

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "udita"); //**** strings copy for name//

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}

// structure example 3 student record store//

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    struct student s2;
    struct student s3;

    s1.roll = 1664;
    s2.roll = 97424;
    s3.roll = 16;

    s1.cgpa = 9.2;
    s2.cgpa = 8.7;
    s3.cgpa = 6.5;

    strcpy(s1.name, "udita");
    strcpy(s2.name, "namrata");
    strcpy(s3.name, "ridipta");

    printf("student name = %s\n   %s\n    %s\n", s1.name, s2.name, s3.name);
    printf("student roll = %d\n   %d\n    %d\n", s1.roll, s2.roll, s3.roll);
    printf("student cgpa = %f\n   %f\n    %f\n", s1.cgpa, s2.cgpa, s3.cgpa);

    return 0;
}

// arrays of structure example student record store//

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student ECE[100]; // arrays//
    ECE[0].roll = 1664;
    ECE[0].cgpa = 9.2;
    strcpy(ECE[0].name, "udita");

    printf("student name =%s\nstudent roll =%d\ncgpa = %f\n", ECE[0].name, ECE[0].roll, ECE[0].cgpa);
    return 0;
}

// initiallising structure example student record store//

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = {"shradha", 1664, 9.2};

    printf("student name =%s\n", s1.name);
    printf("student roll =%d\n", s1.roll);
    printf("student cgpa =%f\n", s1.cgpa);

    return 0;
}

// pointers to structure example student record store//

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = {"shradha", 1664, 9.2};

    printf("student name =%s\n", s1.name);
    printf("student roll =%d\n", s1.roll);
    printf("student cgpa =%f\n", s1.cgpa);

    struct student *ptr = &s1;

    printf("student name =%s\n", (*ptr).name);
    printf("student roll =%d\n", (*ptr).roll);
    printf("student cgpa =%f\n", (*ptr).cgpa);

    printf("student -> name =%s\n", ptr->name); // using arrow operation//
    printf("student -> roll =%d\n", ptr->roll);
    printf("student -> cgpa =%f\n", ptr->cgpa);

    return 0;
}

// passing structure to function student record store//
// call by value//
#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student s1);

int main()
{
    struct student s1 = {"shradha", 1664, 9.2};
    printInfo(s1); // function call//

    printf("student roll =%d\n", s1.roll);

    return 0;
}
void printInfo(struct student s1)
{
    printf("student information : \n");
    printf("student name =%s\n", s1.name);
    printf("student roll =%d\n", s1.roll);
    printf("student cgpa =%f\n", s1.cgpa);
}

/*student information :
student name =shradha
student roll =1664
student cgpa =9.200000
student roll =1664*/

// passing structure to function student record store//
// call by refference//

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student s1);

int main()
{
    struct student s1 = {"shradha", 1664, 9.2};
    printInfo(s1); // function call//

    s1.roll = 1660; // call by refference//

    printf("student roll =%d\n", s1.roll);

    return 0;
}
void printInfo(struct student s1)
{
    printf("student information : \n");
    printf("student name =%s\n", s1.name);
    printf("student roll =%d\n", s1.roll);
    printf("student cgpa =%f\n", s1.cgpa);

    s1.roll = 1660;
}

/*student information :
student name =shradha
student roll =1664
student cgpa =9.200000
student roll =1660*/

// typedef keyword uses in structure student record store//

#include <stdio.h>
#include <string.h>

typedef struct ComputerEngineeringStudent
{
    char name[100];
    int roll;
    float cgpa;
} coe; // alias of struct ComputerEngineeringStudent//

int main()
{
    coe s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "shradha");

    printf("student name is %s\n", s1.name);

    return 0;
}

// Address (house no.block,city,state)of 5 people//

#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

int main()
{
    struct address s1 = {1, 1234, "Berhampur", "W.B"};
    struct address s2 = {17, 0134, "Bankura", "U.P"};
    struct address s3 = {5777, 1349, "rampur", "BIHAR"};
    struct address s4 = {1789, 1346, "Bera", "DELHI"};
    struct address s5 = {1237, 1374, "Br", "ASSAM"};

    printf("People houseNo.=%d people block =%d people city=%s people state=%s\n", s1.houseNo, s1.block, s1.city, s1.state);
    printf("People houseNo.=%d people block =%d people city=%s people state=%s\n", s2.houseNo, s2.block, s2.city, s2.state);
    printf("People houseNo.=%d people block =%d people city=%s people state=%s\n", s3.houseNo, s3.block, s3.city, s3.state);
    printf("People houseNo.=%d people block =%d people city=%s people state=%s\n", s4.houseNo, s4.block, s4.city, s4.state);
    printf("People houseNo.=%d people block =%d people city=%s people state=%s\n", s5.houseNo, s5.block, s5.city, s5.state);

    return 0;
}

// Address (house no.block,city,state)of 5 people
// using function
#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printAdd(struct address add);
int main()
{
    struct address adds[5];
    // input//
    printf("enter info for person 1 ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("enter info for person 2 ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("enter info for person 3 ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("enter info for person 4 ");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("enter info for person 5 ");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printAdd(adds[0]); // function call//
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}
void printAdd(struct address add)
{
    printf("address is %d,%d,%s,%s\n", add.houseNo, add.block, add.city, add.state);
}

// Address (house no.block,city,state)of 5 people
// using function & loop
#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printAdd(struct address add);
int main()
{
    struct address adds[5];
    for (int i = 0; i < 5; i++)
    {
        // input//
        printf("enter info for person %d:\n", i + 1);
        scanf("%d", &adds[i].houseNo);
        scanf("%d", &adds[i].block);
        scanf("%s", adds[i].city);
        scanf("%s", adds[i].state);
    }
    for (int i = 0; i < 5; i++)
    {
        printAdd(adds[i]); // function call//
    }
    return 0;
}
void printAdd(struct address add)
{
    printf("address is %d,%d,%s,%s\n", add.houseNo, add.block, add.city, add.state);
}

// create a structure to store vector and their sum
// using function
#include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
    int sum;
};
void calcsum(struct vector v1, struct vector v2, struct vector sum);
int main()
{
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 17};
    struct vector sum = {0};

    calcsum(v1, v2, sum); // function call//
    return 0;
}
void calcsum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}

/*sum of x is : 8
sum of y is : 27*/

// create a structure to store complex numbers
// using arrow opr.
#include <stdio.h>
#include <string.h>

struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex number1 = {5, 8};
    struct complex *ptr = &number1;
    printf("real part = %d\n", ptr->real);
    printf("img part = %d\n", ptr->img);

    return 0;
}
/*real part = 5
img part = 8*/

// create a structure to store bank acc. details of abc bank//
// using alias(typedef opr.)
#include <stdio.h>
#include <string.h>

typedef struct Bankaccount
{
    char name[100];
    int AccNo;
    char IFSC[50];
} BANK; // alias

int main()
{
    BANK s1;
    strcpy(s1.name, "shradha");
    s1.AccNo = 348906;
    strcpy(s1.IFSC, "HDFC0005678");

    printf("accHolder  name is %s\n", s1.name);
    printf("accHolder  AccNo is %d\n", s1.AccNo);
    printf("accHolder  IFSC code is %s\n", s1.IFSC);

    return 0;
}

/*accHolder  name is shradha
accHolder  AccNo is 348906
accHolder  IFSC code is HDFC0005678*/

// or//

// create a structure to store bank acc. details of abc bank//
// using alias(typedef opr.)
#include <stdio.h>
#include <string.h>

typedef struct Bankaccount
{
    char name[100];
    int AccNo;
    char IFSC[50];
} BANK; // alias

int main()
{
    BANK s1 = {"alu", 123, "hdfc0005678"};
    BANK s2 = {"potol", 1256, "hdfc0034348"};
    BANK s3 = {"jhinga", 12390, "hdfc0009090"};

    printf("accHolder  name is %s\n", s1.name);
    printf("accHolder  AccNo is %d\n", s1.AccNo);
    printf("accHolder  IFSC code is %s\n", s1.IFSC);

    printf("accHolder  name is %s\n", s2.name);
    printf("accHolder  AccNo is %d\n", s2.AccNo);
    printf("accHolder  IFSC code is %s\n", s2.IFSC);

    printf("accHolder  name is %s\n", s3.name);
    printf("accHolder  AccNo is %d\n", s3.AccNo);
    printf("accHolder  IFSC code is %s\n", s3.IFSC);

    return 0;
}

/*accHolder  name is alu
accHolder  AccNo is 123
accHolder  IFSC code is hdfc0005678
accHolder  name is potol
accHolder  AccNo is 1256
accHolder  IFSC code is hdfc0034348
accHolder  name is jhinga
accHolder  AccNo is 12390
accHolder  IFSC code is hdfc0009090*/
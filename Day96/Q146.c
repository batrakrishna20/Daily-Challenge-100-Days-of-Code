// Q146: Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[30];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e;

    // input
    scanf("Employee: %s | ID: %d | Joining Date: %d %d %d",
          e.name, &e.id,
          &e.joining.day, &e.joining.month, &e.joining.year);

    // output
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name, e.id,
           e.joining.day, e.joining.month, e.joining.year);

    return 0;
}

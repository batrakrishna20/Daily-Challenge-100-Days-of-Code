// Q150: Use pointer to struct to modify and display data using -> operator.


#include <stdio.h>
struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    // input in given format
    scanf("Student pointer modifying values: %s %d %d",
          ptr->name, &ptr->roll, &ptr->marks);

    // output
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}

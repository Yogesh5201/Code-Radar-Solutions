#include <stdio.h>

// Define the structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &employees[i].id, employees[i].name, &employees[i].salary);
    }

    // Display employee details with bonus
    for (int i = 0; i < n; i++) {
        float bonus = (employees[i].salary < 50000) ? 0.10 * employees[i].salary : 0.05 * employees[i].salary;
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", employees[i].id, employees[i].name, bonus);
    }

    return 0;
}
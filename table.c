#include <stdio.h>

// Define a structure to hold employee data
struct Employee {
    int id;
    char name[20];
    char department[20];
    int salary;
    int bonus;
    int hoursWorked;
    int projectsCompleted;
    int age;
    char region[10];
};

int main() {
    // Initialize employee data
    struct Employee employees[10] = {
        {1, "Alice", "HR", 50000, 3000, 160, 5, 29, "East"},
        {2, "Bob", "IT", 60000, 4000, 175, 8, 34, "West"},
        {3, "Charlie", "Finance", 55000, 3500, 165, 6, 26, "North"},
        {4, "Dave", "Marketing", 47000, 2000, 150, 7, 31, "East"},
        {5, "Eve", "IT", 72000, 5000, 180, 10, 40, "South"},
        {6, "Frank", "HR", 49000, 2500, 155, 4, 38, "West"},
        {7, "Grace", "Marketing", 48000, 2200, 162, 5, 28, "North"},
        {8, "Henry", "IT", 65000, 4100, 170, 9, 33, "East"},
        {9, "Iris", "Finance", 54000, 3000, 158, 6, 27, "West"},
        {10, "Jack", "Marketing", 46000, 1500, 145, 4, 35, "South"}
    };

    // Print table header
    printf("%-5s %-10s %-12s %-8s %-8s %-15s %-18s %-5s %-10s\n",
           "ID", "Name", "Department", "Salary", "Bonus", "Hours Worked", "Projects Completed", "Age", "Region");
    printf("-----------------------------------------------------------------------------------------------\n");

    // Print employee data
    for(int i = 0; i < 10; i++) {
        printf("%-5d %-10s %-12s %-8d %-8d %-15d %-18d %-5d %-10s\n",
               employees[i].id, employees[i].name, employees[i].department,
               employees[i].salary, employees[i].bonus, employees[i].hoursWorked,
               employees[i].projectsCompleted, employees[i].age, employees[i].region);
    }

    return 0;
}

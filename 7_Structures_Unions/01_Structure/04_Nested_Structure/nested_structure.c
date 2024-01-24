#include <stdio.h>

// Definition of the Address structure
struct Address {
    char street[50];
    char city[50];
    char state[50];
    char pincode[06];
};

// Definition of the Student structure with Address structure embedded
struct StudentRecord {
    int roll_no;
    char name[50];
    float fees;
    struct Address address; // Embedding Address structure
};

int main() {
    // Creating an instance of the StudentRecord structure
    struct StudentRecord student;

    // Reading data from the keyboard
    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_no);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("\nEnter Fees: ");
    scanf("%f", &student.fees);

    printf("\nEnter Street: ");
    scanf("%s", student.address.street);

    printf("Enter City: ");
    scanf("%s", student.address.city);

    printf("Enter State: ");
    scanf("%s", student.address.state);

    printf("Enter pincode: ");
    scanf("%s", student.address.pincode);

    // Displaying information
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Fees: %.2f\n", student.fees);
    printf("Address: %s, %s, %s, %s\n", student.address.street, student.address.city, student.address.state, student.address.pincode);

    return 0;
}

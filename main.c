/*  
Project: Major 1
Names: Quan Nguyen, Oscar Trujillo, Jaylin Nwigwe, Cade Powell
Course: CSCE 3600, Section 001
Date: 22 June, 2025
Description: Performs bitwise operations based on user choice
*/
#include "major1.h"

int main() {
    int choice;
    unsigned int num, rotateBits;
    
    do {
        displayMenu();
        printf("--> ");
        scanf("%d", &choice);
        
        // Validate menu choice
        while (choice < 1 || choice > 5) {
            printf("Error: Invalid option. Please try again.\n");
            displayMenu();
            printf("--> ");
            scanf("%d", &choice);
        }
        
        if (choice == 5) {
            printf("Program terminating. Goodbye...\n");
            break;
        }
        
        // Get input
        printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
        scanf("%u", &num);
        while (num < 1 || num > 4294967295) {
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            scanf("%u", &num);
        }
        
        // Handle each operation 
        switch (choice) {
            case 1:
                printf("The number of leading zeroes in %u is %d\n", num, countLeadingZero(num));
                break;
            case 2:
                printf("Endian swap of %u gives %u\n", num, endianSwap(num));
                break;
            case 3:
                printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
                scanf("%u", &rotateBits);
                while (rotateBits > 31) {
                    printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
                    scanf("%u", &rotateBits);
                }
                printf("%u rotated by %u position gives: %u\n", num, rotateBits, rotateRight(num, rotateBits));
                break;
            case 4:
                printf("Parity of %u is %d\n", num, parity(num));
                break;
        }
    } while (choice != 5);
    
    return 0;
}

void displayMenu() {
    printf("\nEnter the menu option for the operation to perform:\n");
    printf("(1) Count Leading Zero\n");
    printf("(2) Endian Swap\n");
    printf("(3) Rotate-right\n");
    printf("(4) Parity\n");
    printf("(5) EXIT\n");
}

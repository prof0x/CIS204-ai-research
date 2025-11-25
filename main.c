#include <stdio.h>
#include "helpers.h"

int main() {
    // Declare variables for daily goal, user input, and HydrationEntry struct
    int dailyGoal = 0;
    int userChoice = 0;
    int amount = 0;
    char cont = 'y';
    HydrationEntry entry;

    // Prompt the user to enter their daily hydration goal
    printf("Enter your daily hydration goal (in ounces): ");
    scanf("%d", &dailyGoal);

    // Initialize the HydrationEntry struct (set totals to 0, set date)
    entry.totalOunces = 0;
    entry.lastEntryAmount = 0;
    printf("Enter today's date (MM/DD/YYYY): ");
    scanf("%11s", entry.date);

    // Loop: 
    while (cont == 'y' || cont == 'Y') {
        //   - Ask the user if they want to add a new entry or view summary
        printf("\nChoose an option:\n");
        printf("1. Add water entry\n");
        printf("2. View summary\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &userChoice);

        if (userChoice == 1) {
            //   - If adding, prompt for amount, call addWater and updateEntry
            printf("Enter amount of water consumed (in ounces): ");
            scanf("%d", &amount);
            entry.totalOunces = addWater(entry.totalOunces, amount);
            updateEntry(&entry, amount);
            printf("Entry added!\n");
        } else if (userChoice == 2) {
            //   - If viewing summary, call printSummary
            printSummary(entry, dailyGoal);
        } else {
            printf("Invalid choice. Please enter 1 or 2.\n");
        }

        //   - Ask if the user wants to continue or exit
        printf("\nWould you like to continue? (y/n): ");
        scanf(" %c", &cont);
    }

    // Format and print all output clearly for the user
    printf("\nFinal summary for %s:\n", entry.date);
    printSummary(entry, dailyGoal);

    // Return 0 to indicate successful completion
    return 0;
}

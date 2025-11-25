#include "helpers.h"
#include <stdio.h>

// Adds the given amount to the current total and returns the new total
int addWater(int currentTotal, int amount) {
    // Algorithm:
    // 1. Add 'amount' to 'currentTotal'.
    currentTotal += amount;
    // 2. Return the result.
    return currentTotal;
}

// Updates the HydrationEntry struct with a new amount
void updateEntry(HydrationEntry *entry, int newAmount) {
    // Algorithm:
    // 1. Set entry->lastEntryAmount to newAmount.
    entry->lastEntryAmount = newAmount;
}

// Calculates the percentage of the goal completed
float calculatePercentage(int total, int goal) {
    // Algorithm:
    // 1. Divide 'total' by 'goal' and multiply by 100 to get percentage.
    // 2. Return the result as a float.
    if (goal == 0) {
        return 0.0f;
    }
    return ((float)total / (float)goal) * 100.0f;
}

// Prints a summary of the hydration entry and goal
void printSummary(HydrationEntry entry, int goal) {
    // Algorithm:
    // 1. Print the date, total ounces, and last entry amount from the struct.
    printf("Date: %s\n", entry.date);
    printf("Total Ounces: %d\n", entry.totalOunces);
    printf("Last Entry Amount: %d\n", entry.lastEntryAmount);
    // 2. Print the hydration goal and percentage completed.
    printf("Hydration Goal: %d\n", goal);
    float percent = calculatePercentage(entry.totalOunces, goal);
    printf("Goal Completed: %.2f%%\n", percent);
    // 3. Print a message if the goal was reached or not.
    if (entry.totalOunces >= goal) {
        printf("Congratulations! You reached your hydration goal!\n");
    } else {
        printf("Keep going! You haven't reached your goal yet.\n");
    }
}

#ifndef HELPERS_H
#define HELPERS_H

// Struct for hydration tracking
typedef struct {
    int totalOunces;
    int lastEntryAmount;
    char date[12];
} HydrationEntry;

// Function prototypes
int addWater(int currentTotal, int amount);
void updateEntry(HydrationEntry *entry, int newAmount);
float calculatePercentage(int total, int goal);
void printSummary(HydrationEntry entry, int goal);

#endif // HELPERS_H

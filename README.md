# CIS204-ai-research

## Program Purpose  
- Users will use this program to track how much water they drink each day.  
- The program solves the problem of inconsistent hydration tracking by providing a simple way to record water intake and monitor daily progress.  
- The program collects user input, stores hydration entries, calculates total ounces consumed, and displays whether the user has achieved their hydration goal.  

## Input, Output, and Memory Management
- Users will need to provide their daily hydration goal, the amount of water they consumed, and whether they want to continue adding entries or view a summary.  
- The program will output the total ounces consumed, the percentage of the hydration goal completed, a formatted summary of entries, and a message indicating if the user reached their goal.  
- Variables will include `dailyGoal`, `totalOunces`, a `HydrationEntry` struct instance, and temporary variables for calculations and user input.  
- The program will require minimal memory, using only a few integers, one struct, and standard stack variables—remaining well under 1 MB.  

## Functions Needed 
- int addWater(int currentTotal, int amount);  
- void updateEntry(struct HydrationEntry *entry, int newAmount);  
- float calculatePercentage(int total, int goal);  
- void printSummary(struct HydrationEntry entry, int goal);  
- Example: int addNumbers(int a, int b);  

## Data Structures 
  ```c
  typedef struct {
      int totalOunces;
      int lastEntryAmount;
      char date[12];
  } HydrationEntry;
  ```
This struct represents a hydration-tracking object that stores daily totals, the most recent entry, and the date.

## File Responsibilities - The following files are required in your project submission. Describe the purpose and contents of each file.

**main.c**  
Contains `main()`, prompts for user input, and controls program flow.

**helpers.h**  
Declares the struct and all function prototypes.

**helpers.c**  
Implements the helper functions for calculations, struct updates, and summary printing.

## Research Plan - Write a 250 words describing your strategy for using AI to help you to write the code for this project.

My strategy for using AI is to treat it as a support tool while still ensuring that I fully understand and write the bulk of the program myself. I will begin by outlining my program requirements, identifying variables, designing the struct, and listing the functions I need. Once I have a clear plan, I will use AI in small, controlled ways to assist with generating starter code, verifying syntax, and exploring alternatives. I will avoid asking for the entire program at once; instead, I will request focused code segments so I retain full ownership of the logic.

I will also use AI to help me debug compiler errors. When I encounter issues, I will paste the error messages into a prompt and ask the AI to help interpret them and provide likely causes. This will help me learn debugging strategies while still keeping me responsible for the fix.

### Prompts I will use include:
- “Generate a C function that adds an amount of water to an existing total.”  
- “Write a struct for tracking daily hydration with total ounces and last entry.”  
- “Create a function that prints a formatted hydration summary.”  
- “Explain this compiler error and how I can fix it.”  
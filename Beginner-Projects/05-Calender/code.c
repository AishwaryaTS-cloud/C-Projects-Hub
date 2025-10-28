#include <stdio.h>

// Function to compute day of week index for date day/month/year
// Returns 0 = Sunday, 1 = Monday, … 6 = Saturday
int dayNumber(int day, int month, int year) {
    static int t[] = {0, 3, 2, 5, 0, 3,
                      5, 1, 4, 6, 2, 4};
    // If month is Jan or Feb, treat as month 13 or 14 of previous year
    if (month < 3) {
        year = year - 1;
    }
    return (year + year/4 - year/100
            + year/400 + t[month-1] + day) % 7;
}

// Return month‐name for monthNumber (1=Jan, 2=Feb…12=Dec)
const char* getMonthName(int monthNumber) {
    static const char* names[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    if (monthNumber >= 1 && monthNumber <=12) {
        return names[monthNumber-1];
    }
    return "Invalid";
}

// Return number of days in given month/year
int numberOfDays(int month, int year) {
    switch(month) {
        case 1:  return 31;
        case 2:  // February: check leap year
            if ((year % 400 == 0) ||
                (year % 4 == 0 && year % 100 != 0)) {
                return 29;
            } else {
                return 28;
            }
        case 3:  return 31;
        case 4:  return 30;
        case 5:  return 31;
        case 6:  return 30;
        case 7:  return 31;
        case 8:  return 31;
        case 9:  return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0; // invalid month
    }
}

// Function to print calendar of entire given year
void printCalendar(int year) {
    printf("     Calendar  %d\n\n", year);
    int current = dayNumber(1, 1, year);
    // Loop through months 1 to 12
    for (int m = 1; m <= 12; ++m) {
        int days = numberOfDays(m, year);
        const char* mName = getMonthName(m);
        // Header for month
        printf(" ------------- %s -------------\n", mName);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        // Spaces for first day
        int k;
        for (k = 0; k < current; ++k) {
            printf("    ");  // 4 spaces to align
        }

        for (int d = 1; d <= days; ++d) {
            printf("%4d", d);
            ++k;
            if (k > 6) {
                k = 0;
                printf("\n");
            }
        }
        if (k != 0) {
            printf("\n");
        }
        // Update current for next month
        current = k;
        printf("\n");
    }
}

int main(void) {
    int year;
    printf("Enter year (e.g. 2025): ");
    if (scanf("%d", &year) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (year < 1) {
        printf("Year must be positive integer.\n");
        return 1;
    }
    printCalendar(year);
    return 0;
}

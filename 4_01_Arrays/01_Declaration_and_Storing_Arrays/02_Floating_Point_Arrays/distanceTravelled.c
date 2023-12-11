#include <stdio.h>

#define MAX_DISTANCES 24 // Maximum number of distance measurements

int main() {
    float distances[MAX_DISTANCES] = {15.2, 20.5, 18.9, 30.1}; // Example distance measurements
    
    // Accessing and printing distance measurements
    printf("Distance Measurements in a Journey:\n");
    for (int i = 0; i < MAX_DISTANCES; ++i) {
        printf("Measurement %d: %.1f miles\n", i + 1, distances[i]);
    }

    return 0;
}
/*  
Distance Measurements in a Journey:
Measurement 1: 15.2 miles
Measurement 2: 20.5 miles
Measurement 3: 18.9 miles
Measurement 4: 30.1 miles
Measurement 5: 0.0 miles
Measurement 6: 0.0 miles
Measurement 7: 0.0 miles
Measurement 8: 0.0 miles
Measurement 9: 0.0 miles
Measurement 10: 0.0 miles
Measurement 11: 0.0 miles
Measurement 12: 0.0 miles
Measurement 13: 0.0 miles
Measurement 14: 0.0 miles
Measurement 15: 0.0 miles
Measurement 16: 0.0 miles
Measurement 17: 0.0 miles
Measurement 18: 0.0 miles
Measurement 19: 0.0 miles
Measurement 20: 0.0 miles
Measurement 21: 0.0 miles
Measurement 22: 0.0 miles
Measurement 23: 0.0 miles
Measurement 24: 0.0 miles
*/
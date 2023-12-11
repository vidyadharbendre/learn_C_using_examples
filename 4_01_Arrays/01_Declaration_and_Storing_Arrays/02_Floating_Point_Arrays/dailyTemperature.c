#include <stdio.h>

#define MAX_TEMPERATURES 24 // Maximum number of temperature readings in a day

int main() {
    float dailyTemperatures[MAX_TEMPERATURES] = {25.5, 26.8, 27.2, 24.3}; // Example daily temperatures
    
    // Accessing and printing daily temperatures
    printf("Daily Temperatures:\n");
    for (int i = 0; i < MAX_TEMPERATURES; ++i) {
        printf("Hour %d: %.1f°C\n", i + 1, dailyTemperatures[i]);
    }

    return 0;
}
// The output of the above program is shown as below:
/* .  
Daily Temperatures:
Hour 1: 25.5°C
Hour 2: 26.8°C
Hour 3: 27.2°C
Hour 4: 24.3°C
Hour 5: 0.0°C
Hour 6: 0.0°C
Hour 7: 0.0°C
Hour 8: 0.0°C
Hour 9: 0.0°C
Hour 10: 0.0°C
Hour 11: 0.0°C
Hour 12: 0.0°C
Hour 13: 0.0°C
Hour 14: 0.0°C
Hour 15: 0.0°C
Hour 16: 0.0°C
Hour 17: 0.0°C
Hour 18: 0.0°C
Hour 19: 0.0°C
Hour 20: 0.0°C
Hour 21: 0.0°C
Hour 22: 0.0°C
Hour 23: 0.0°C
Hour 24: 0.0°C
*/
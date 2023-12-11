#include <stdio.h>

#define MAX_READINGS 50 // Maximum number of sensor readings

int main() {
    float sensorReadings[MAX_READINGS] = {23.5, 24.1, 22.8, 25.3}; 
    // Example sensor readings
    
    // Accessing and printing sensor readings
    printf("Sensor Readings from IoT Devices:\n");
    for (int i = 0; i < MAX_READINGS; ++i) {
        printf("Reading %d: %.1f\n", i + 1, sensorReadings[i]);
    }

    return 0;
}

// The output of the above program is shown as below:
/*
Sensor Readings from IoT Devices:
Reading 1: 23.5
Reading 2: 24.1
Reading 3: 22.8
Reading 4: 25.3
Reading 5: 0.0
Reading 6: 0.0
Reading 7: 0.0
Reading 8: 0.0
Reading 9: 0.0
Reading 10: 0.0
Reading 11: 0.0
Reading 12: 0.0
Reading 13: 0.0
Reading 14: 0.0
Reading 15: 0.0
Reading 16: 0.0
Reading 17: 0.0
Reading 18: 0.0
Reading 19: 0.0
Reading 20: 0.0
Reading 21: 0.0
Reading 22: 0.0
Reading 23: 0.0
Reading 24: 0.0
Reading 25: 0.0
Reading 26: 0.0
Reading 27: 0.0
Reading 28: 0.0
Reading 29: 0.0
Reading 30: 0.0
Reading 31: 0.0
Reading 32: 0.0
Reading 33: 0.0
Reading 34: 0.0
Reading 35: 0.0
Reading 36: 0.0
Reading 37: 0.0
Reading 38: 0.0
Reading 39: 0.0
Reading 40: 0.0
Reading 41: 0.0
Reading 42: 0.0
Reading 43: 0.0
Reading 44: 0.0
Reading 45: 0.0
Reading 46: 0.0
Reading 47: 0.0
Reading 48: 0.0
Reading 49: 0.0
Reading 50: 0.0
*/
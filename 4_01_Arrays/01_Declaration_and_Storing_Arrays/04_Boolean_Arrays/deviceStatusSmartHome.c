#include <stdio.h>
#include <stdbool.h>

#define NUM_DEVICES 8 // Number of devices

int main() {
    bool deviceStates[NUM_DEVICES] = {true, false, true, false, true}; // Example device states
    
    // Accessing and printing device states
    printf("Device States in a Smart Home:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Device %d State: %s\n", i + 1, deviceStates[i] ? "on" : "off");
    }

    return 0;
}

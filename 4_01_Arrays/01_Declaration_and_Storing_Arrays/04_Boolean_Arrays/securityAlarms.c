#include <stdio.h>
#include <stdbool.h>

#define NUM_ALARMS 5 // Number of security alarms

int main() {
    bool securityAlarms[NUM_ALARMS] = {false, true, false, true, false}; // Example security alarms
    
    // Accessing and printing security alarms status
    printf("Security Alarms:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Alarm %d Status: %s\n", i + 1, securityAlarms[i] ? "breach" : "normal");
    }

    return 0;
}

/* . 
Security Alarms:
Alarm 1 Status: normal
Alarm 2 Status: breach
Alarm 3 Status: normal
Alarm 4 Status: breach
Alarm 5 Status: normal
*/
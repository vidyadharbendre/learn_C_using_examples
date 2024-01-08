#include <stdio.h>

int main(){

    char str[50];

    printf("Enter a string\n");
    gets(str);

    printf("String read using gets : %s", str);

    return 0;
}

// The output of the above program is shown as below:
/*
Enter a string
warning: this program uses gets(), which is unsafe.
Vidyadhar Bendre
String read using gets : Vidyadhar Bendre% 
*/

/*
readString_gets.c:8:5: warning: 'gets' is deprecated: This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead. [-Wdeprecated-declarations]
    gets(str);
    ^
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h:162:1: note: 'gets' has been explicitly marked deprecated here
__deprecated_msg("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.")
^
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h:215:48: note: expanded from macro '__deprecated_msg'
        #define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))

*/
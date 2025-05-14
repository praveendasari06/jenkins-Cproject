#include <stdio.h>
#include <stdlib.h>
#include <string.huname.h>

int version() {
    struct utsname unameData;

    // Get Linux and kernel information
    if (uname(&unameData) == 0) {
        printf("Operating System: %s\n", unameData.sysname);
        printf("Kernel Version: %s\n", unameData.release);
    } else {
        perror("uname");
    }

    // Get Git version
    printf("Git Version: ");
    fflush(stdout); // Ensure the prompt is displayed before the command execution
    system("git --version");

    // Get Java version
    printf("Java Version: ");
    fflush(stdout); // Ensure the prompt is displayed before the command execution
    system("java -version 2>&1 | grep \"java version\" ");

    // return 0;
}

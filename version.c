#include <stdio.h>
#include <sys/utsname.h>

int version() {
    struct utsname sysinfo;

    // Get system info
    if (uname(&sysinfo) == -1) {
        perror("uname");
        return 1;
    }

    // Print details
    printf("System Name    : %s\n", sysinfo.sysname);
    printf("Node Name      : %s\n", sysinfo.nodename);
    printf("Kernel Release : %s\n", sysinfo.release);
    printf("Kernel Version : %s\n", sysinfo.version);
    printf("Machine        : %s\n", sysinfo.machine);
    printf("Architecture   : %s\n", sysinfo.machine);  // same as machine
#if defined(_GNU_SOURCE)
    printf("Domain Name    : %s\n", sysinfo.domainname); // GNU extension
#endif

   // return 0;
}


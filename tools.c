#include "tools.h"

int get_all_child_process(pid_t ppid) {
    char *buff = NULL;
    size_t len = 255;
    char command[256] = {0};

    sprintf(command, "ps -ef|awk '$3==%u {print $2}'", ppid);
    FILE *fp = popen(command, "r");
    while (getline(&buff, &len, fp) >= 0) {
        printf("%s\n", buff);
    }
    free(buff);
    fclose(fp);
    return 0;
}
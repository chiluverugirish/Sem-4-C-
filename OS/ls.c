#include <stdio.h>
#include <dirent.h>

void list_files(const char *dirname) {
    struct dirent *entry;
    DIR *dir = opendir(dirname);

    if (dir == NULL) {
        perror("Error opening directory");
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(dir);
}

int main(int argc, char *argv[]) {
    const char *dirname = ".";  // Default to current directory

    if (argc > 1) {
        dirname = argv[1];  // Use provided directory
    }

    list_files(dirname);
    return 0;
}
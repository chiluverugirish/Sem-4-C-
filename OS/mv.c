#include <stdio.h>
#include <stdlib.h>

void move_file(const char *source, const char *destination) {
    if (rename(source, destination) == 0) {
        printf("File moved successfully from %s to %s\n", source, destination);
    } else {
        perror("Error moving file");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    move_file(argv[1], argv[2]);
    return 0;
}
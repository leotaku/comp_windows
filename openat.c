#define _POSIX_C_SOURCE 200809L
#include <fcntl.h>

int main() {
    return openat(AT_FDCWD, ".", 0);
}

#include <iostream>

char* use_after_scope(size_t offset) {
    char array[1024];
    char *ptr = array + offset;
    return ptr;
}

int main() {
    auto *ptr = use_after_scope(1023);
    *ptr = 1;
    return 0;
}
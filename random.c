#include <stdlib.h>
#include <time.h>

char randchar() {
    return 'A' + (rand() % 26);
}

int main() {
    srand(time(NULL));
}


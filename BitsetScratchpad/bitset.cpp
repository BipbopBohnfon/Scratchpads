#include <iostream>

#define CHAR_BIT 8
#define BITMASK(b) (1 << ((b) % CHAR_BIT))
#define BITSLOT(b) ((b) / CHAR_BIT)
#define BITSET(a, b) ((a)[BITSLOT(b)] |= BITMASK(b))
#define BITCLEAR(a, b) ((a)[BITSLOT(b)] &= ~BITMASK(b))
#define BITTEST(a, b) ((a)[BITSLOT(b)] & BITMASK(b))
#define BITNSLOTS(nb) ((nb + CHAR_BIT - 1) / CHAR_BIT)


int main() {
    char bitarray[BITNSLOTS(32)];

    for (int i = 0; i < 32; i++) {
        BITSET(bitarray, i);
    }

    BITCLEAR(bitarray, 17);
    BITCLEAR(bitarray, 12);

    for (int i = 0; i < 32; i++) {
        if (BITTEST(bitarray, i)) std::cout << "TRUE";
        else std::cout << "FALSE";
        std::cout << " ";
    }

    return 0;
}

void printBits(unsigned uint32_t) {

}
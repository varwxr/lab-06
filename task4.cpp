#include <cstdint>
#include <iostream>

std::uint8_t pack(const bool b[8]) {
    std::uint8_t result = 0;

    for (int i = 0; i < 8; i++) {
        if (b[i]) {
            result |= (1 << i);
        }
    }

    return result;
}

void unpack(std::uint8_t value, bool b[8]) {
    for (int i = 0; i < 8; i++) {
        b[i] = (value >> i) & 1;
    }
}

int main() {
    bool buttons[8] = {1, 0, 0, 1, 1, 0, 0, 0};
    bool restored[8];

    std::uint8_t packed = pack(buttons);

    std::cout << (int)packed << '\n';

    unpack(packed, restored);

    for (int i = 0; i < 8; i++) {
        std::cout << restored[i] << ' ';
    }

    std::cout << '\n';

    return 0;
}
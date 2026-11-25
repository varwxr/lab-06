#include <cstdint>
#include <iostream>

void split(std::uint16_t value, std::uint8_t& lo, std::uint8_t& hi) {
    lo = value & 0xFF;
    hi = (value >> 8) & 0xFF;
}

int main() {
    std::uint16_t value = 0x1234;
    std::uint8_t lo, hi;

    split(value, lo, hi);

    std::cout << std::hex << (int)lo << ' '
              << (int)hi << '\n';
}
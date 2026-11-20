#include <string>
#include <vector>

void power_of_two() {
    unsigned int n = 64u;
    bool is_power = (n != 0u) && ((n & (n - 1u)) == 0u);
    (void)is_power;
}

void leading_zeros() {
    unsigned int n = 0b000101u;
    int zeros = 0;
    while ((n & 1u) == 0u) { zeros += 1; n >>= 1; }
    (void)zeros;
}

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

extern "C" int prime_thorn();
extern "C" void serene_orbit();
extern "C" void silver_hollow();
extern "C" void misty_beacon();
extern "C" void still_hollow();

int main() {
    power_of_two();
    leading_zeros();
    square_value();
    double_value();
    serene_orbit();
    silver_hollow();
    misty_beacon();
    still_hollow();
    return prime_thorn();
}

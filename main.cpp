#include <iostream>
#include <format>
#include <string_view>

int main() {
    // C++20: using std::string_view and std::format
    constexpr std::string_view greeting = "Hello, World!";
    std::cout << std::format("{}\n", greeting);
    return 0;
}

#include <asio.hpp>
#include <iostream>

int main() {
    try {
        asio::io_context io_context;
        std::cout << "ASIO test successful!" << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
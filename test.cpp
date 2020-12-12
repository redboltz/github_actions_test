#include <iostream>

int main() {
#if defined(__GLIBCXX__)
    std::cout << __GLIBCXX__ << std::endl;
#endif
    std::cout << "cout" << std::endl;
    std::cerr << "cerr" << std::endl;
    std::clog << "clog" << std::endl;
}

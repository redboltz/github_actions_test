#include <iostream>

int main() {
#if defined(__GLIBCXX__)
    std::cout << __GLIBCXX__ << std::endl;
#endif
}

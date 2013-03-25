// fl2yd.cpp asks the length in furlong and converts to yards

#include <iostream>

int main(void)
{
    int l;
    l = 0;
    std::cout << "Please specify length in furlolgs: ";
    std::cin >> l;
    std::cout << "The converted length is ";
    std::cout << l * 220 << " yards" << std::endl;
    return 0;
}

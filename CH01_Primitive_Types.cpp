#include <limits>
#include <cstddef>
#include <iostream>

using namespace std;

int main()
{
    std::cout
        << "short: " << std::dec << std::numeric_limits<short>::min()
        << " or " << std::hex << std::showbase
        << std::numeric_limits<short>::min() << '\n'

        << "int: " << std::dec << std::numeric_limits<int>::min() << std::showbase
        << " or " << std::hex << std::numeric_limits<int>::min() << '\n' << std::dec

        << "ptrdiff_t: " << std::numeric_limits<std::ptrdiff_t>::min() << std::showbase
        << " or " << std::hex << std::numeric_limits<std::ptrdiff_t>::min() << '\n'

        << "float: " << std::numeric_limits<float>::min()
        << " or " << std::hexfloat << std::numeric_limits<float>::min() << '\n'

        << "double: " << std::defaultfloat << std::numeric_limits<double>::min()
        << " or " << std::hexfloat << std::numeric_limits<double>::min() << '\n';
}

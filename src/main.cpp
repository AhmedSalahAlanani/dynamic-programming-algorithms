#include <iostream>
#include "lis/Lis.hpp"

int main()
{
    // Example 1
    lifs::Lifs lifs_1{3, 1, 8, 2, 5};
    lifs_1.run();

    // Example 2
    lifs::Lifs lifs_2{5, 2, 8, 6, 3, 6, 9, 5};
    lifs_2.run();

    return 0;
}
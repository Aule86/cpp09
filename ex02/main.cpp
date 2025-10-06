#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc < 2) {
        std::cout << "Error: At least two arguments" << std::endl;
        return 1;
    }
    PmergeMe mergeinsert;
    mergeinsert.pMerge(argv);
}

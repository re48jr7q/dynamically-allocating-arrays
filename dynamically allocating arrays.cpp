#include <iostream>

int main()
{
    std::cout << "enter a positieve number: ";
    int length{};
    std::cin >> length;

    int* array{ new int[length] {} };

    std::cout << "i just allocated an array of integers of length " << length << '\n';

    array[0] = 5;

    delete[] array;
    //we don't need to set array to nullptr because array
    //goes out of scope immediately after this
    return 0;
}

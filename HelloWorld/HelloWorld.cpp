#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> msgVector = {"Hello", "World"};
    for (const auto word : msgVector)
        std::cout << word << " ";

    std::cout << std::endl;

    return 0;
}

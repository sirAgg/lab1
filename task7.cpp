#include <iostream>

int main()
{
    int input_num;    
    std::cout << " Give a natrual number: ";
    std::cin >> input_num;

    if (input_num < 0)
    {
        std::cout << "Error! Input cannot be negative." << std::endl;
        return 0;
    }

    for (int i=-input_num; i <= input_num; i++)
        std::cout << abs(i) << ' ';

    std::cout << std::endl;
    

    return 0;
}
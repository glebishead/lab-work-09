#include <iostream>
#include <iomanip>
#include <cmath>
 
int main()
{
    std::cout << "Width of Long long is " << sizeof(long long) << std::endl;
    std::cout << "Enter your number ";
    long long number;

    std::cin >> number;
    std::cout << "1 byte is 8 bit. So, " << pow(2, 8) - 1 << " is a max number in 1 byte" << std::endl;
    
    unsigned char* p = (unsigned char *) &number; // we made an array of pointers  to number
    for (int i = 0; i < sizeof(number); i++)
    {
        int t = *(p + i); // p is a char so we change it's type to int so we can see it
        std::cout << t << " ";
    }
    return 0;
}

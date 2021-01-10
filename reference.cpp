#include <iostream>
 
int main()
{
    int value{ 5 }; // normal integer
    int &ref{ value }; // reference to variable value
 
    value = 6; // value is now 6
    ref = 7; // value is now 7
 
    std::cout << value << '\n'; // prints 7
    ++ref;
    std::cout << value << '\n'; // prints 8
 
    return 0;
}

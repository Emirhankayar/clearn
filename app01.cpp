#include <iostream>
//
// cin = console in cout = console out
// std::cin;
//
int main()
{
    int slices = 10;
    std::cout << "Yo fatty how manu pieces of pizza you eat?: ";
    std::cin >> slices; // arrows point in the direction of data flow
    std::cout << "You eat " << slices << " slices of pizza. Are you an obese ?" << std::endl;
    
   //printf("%i\n", slices);
}
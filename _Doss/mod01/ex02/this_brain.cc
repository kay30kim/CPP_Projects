#include <iostream>
#include <string>

// pointer vs reference
// pointer is nullable, but reference is not
// The code at assembly level is the same,
// but the difference is in conception
int main() {
    auto str = std::string("HI THIS IS BRAIN");
    auto ptr = &str;
    auto& ref = str;

    std::cout<<"The adress of str is "<<&str<<std::endl;
    std::cout<<"The adress of ptr is "<<&ptr<<std::endl;
    std::cout<<"The adress of ref is "<<&ref<<std::endl;

    std::cout<<"\nThe value of str is "<<str<<std::endl;
    std::cout<<"\nThe value of ptr is "<<ptr<<std::endl;
    std::cout<<"\nThe value of ref is "<<ref<<std::endl;
    
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char* argv[]) {
    if(argc == 1) {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }

    for(auto i=1;i<argc;i++) {
        auto str = std::string(argv[i]);
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        
        std::cout<<str<<" ";
    }

    std::cout<<std::endl;

    return 0;
}
#include <iostream>
#include <fstream>
#include <string>

/*
    C-Styled code...
*/
int main(int argc, char* argv[]) {
    if(argc != 4) {
        std::cout<<"Input wrong parameters, please input `file orgin replace` structure\n";
        return -1;
    }

    auto file_name  = argv[1];
    //auto origin     = argv[2];
    //auto replace    = argv[3];

    auto file_handler = std::ifstream();
    file_handler.exceptions( std::ifstream::badbit );

    try {
        file_handler.open(file_name);
        auto line = std::string();

        while(std::getline(file_handler, line)) {
            std::cout<<line<<std::endl;
        }
    }
    catch(const std::ifstream::failure& e) {
        std::cout<<e.what()<<std::endl;
    }

    file_handler.close();

    return 0;
}
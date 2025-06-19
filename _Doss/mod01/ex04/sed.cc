#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

auto replace_string(
    std::string& source,
    const std::string& from,
    const std::string& to
) -> std::string {
    if(from.empty()) return source;

    auto result = std::stringstream();
    auto i = std::size_t(0);

    while(i < source.length()) {
        if(source.substr(i, from.length()) == from) {
            result << to;
            i += from.length();
        }
        else {
            result << source[i];
            i++;
        }
    }

    return result.str();
}
/*
    C-Styled code...
*/
int main(int argc, char* argv[]) {
    if(argc != 4) {
        std::cout<<"Input wrong parameters, please input `file orgin replace` structure\n";
        return -1;
    }

    auto file_name  = argv[1];
    auto origin     = argv[2];
    auto replace    = argv[3];

    std::ifstream file_handler;
    
    try {
        file_handler.open(file_name);

        auto line = std::string();
        auto txt = std::stringstream();

        while(std::getline(file_handler, line)) {
            auto rep = replace_string(line, origin, replace);
            txt << rep << '\n';
        }

        std::ofstream output(file_name, std::ios::out | std::ios::trunc);

        output << txt.str();
        output.close();
    }
    catch(const std::ifstream::failure& e) {
        std::cout<<e.what()<<std::endl;
    }

    return 0;
}
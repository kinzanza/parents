#include "Parser.h"
#include <fstream>
#include <sstream>

std::unordered_map<std::string, std::vector<std::string>> Parser::parse(const std::string& filename) {
    std::ifstream file(filename);
    if (!file)
    {
        throw std::invalid_argument("Invalid filename");
    }

    std::unordered_map<std::string, std::vector<std::string>> result;
    std::string line;

    while (std::getline(file, line)) {
        std::string child;
        std::string parent;
        std::string temp;
        std::stringstream ss(line);
        for (int i = 0; i < 2; i++) {
            std::getline(ss, temp, ':');
            if (i == 0) {
                parent = temp;
            }
            else if (i == 1) {
                child = temp;
            }
        }
        result[parent].push_back(child);
    }

    file.close();

    return result;
}
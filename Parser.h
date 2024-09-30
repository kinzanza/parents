#ifndef PARSER_H
#define PARSER_H
#include <iostream>
#include <vector>
#include <unordered_map>

class Parser final {
public:
    std::unordered_map<std::string, std::vector<std::string>> parse(const std::string& filename);
};

#endif // PARSER_H
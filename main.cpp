#include <iostream>
#include "Finder.h"
#include "Parser.h"

int main() {
    try {
        Parser parser;
        Finder finder;

        std::string parent;
        std::string child;

        auto classes = parser.parse("input.txt");

        std::cin >> parent;
        std::cin >> child;

        bool result = finder.is_parent(parent, child, classes);

        if (result) {
            std::cout << parent << " is parent of " << child << "." << std::endl;
        }
        else {
            std::cout << parent << " is not parent of " << child << "." << std::endl;
        }
    }
    catch (std::exception& ex) {
        std::cerr << ex.what();
    }
}
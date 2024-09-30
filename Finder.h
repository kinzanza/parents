#ifndef FINDER_H
#define FINDER_H
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class Finder final {
public:
    bool is_parent(const std::string& parent, const std::string& child,
    const std::unordered_map<std::string, std::vector<std::string>>& classes);
private:
    bool is_parent_recursive(const std::string& current, const std::string& target,
        const std::unordered_map<std::string, std::vector<std::string>>& classes,
        std::unordered_set<std::string>& visited);
};

#endif // FINDER_H
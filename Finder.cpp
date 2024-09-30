#include "Finder.h"

bool Finder::is_parent(const std::string& parent, const std::string& child,
    const std::unordered_map<std::string, std::vector<std::string>>& classes) {
    std::unordered_set<std::string> visited;
    return is_parent_recursive(parent, child, classes, visited);
}

bool Finder::is_parent_recursive(const std::string& current, const std::string& target,
    const std::unordered_map<std::string, std::vector<std::string>>& classes,
    std::unordered_set<std::string>& visited) {
    if (current == target) {
        return true;
    }

    if (visited.count(current) > 0) {
        return false;
    }

    visited.insert(current);

    auto it = classes.find(current);
    if (it != classes.end()) {
        const auto& children = it->second;
        for (const auto& child : children) {
            if (is_parent_recursive(child, target, classes, visited)) {
                return true;
            }
        }
    }

    return false;
}
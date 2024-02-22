#include <iostream>
#include <string>
#include <utility>
#include <unordered_map>
#include "HashMap.h"

int main() {
    std::unordered_map<int, std::string> stdMap;
    UnorderedMap<int, std::string> map;

    stdMap.insert(std::make_pair(2,"hello"));
    map.insert(Pair<const int, std::string>(2,"hello"));

    std::cout << "stdMap[2]: " << stdMap[2] << std::endl;
    std::cout << "map[2]: " << map[2] << std::endl;

    return 0;
}

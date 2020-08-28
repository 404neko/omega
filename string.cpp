

#include "string.h"


bool contains(std::string str, std::string sub_str) {
    if (sub_str.length() == 0) { return false; }
    if (str == sub_str) { return true; }
    return str.find(sub_str) != std::string::npos;
}

std::vector<std::string> split(std::string str, std::string splitter) {
    size_t position = 0;
    size_t current = 0;
    std::vector<std::string> result;
    if (splitter.length() == 0) {
        result.push_back(str);
        return result;
    }
    while (true) {
        current = str.find(splitter, position);
        if (current != std::string::npos) {
            result.push_back(str.substr(position, current - position));
            position = current + splitter.length();
        }
        else {
            result.push_back(str.substr(position, str.length() - position));
            break;
        }
    }
    return result;
}

std::string join(std::vector<std::string> parts, std::string splitter) {
    std::string result = "";
    for (size_t i = 0; i < (parts.size() - 1); i++) {
        result += parts.at(i);
        result += splitter;
    }
    result += parts.at(parts.size() - 1);
    return result;
}




#include <sstream>

template<typename T>
T from_string(const std::string &s) {
    T result;
    std::istringstream stream(s);
    stream >> std::noskipws >> result;
    stream.peek();

    if (!stream.eof()) {
        std::string message = "error converting \"" + s + "\" to " + std::string(typeid(result).name());
        throw BadFromString(message);
    }

    return result;
}

template<>
std::string from_string(const std::string &s) {
    return s;
}

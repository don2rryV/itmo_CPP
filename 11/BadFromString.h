#include <stdexcept>

class BadFromString : public std::runtime_error {
    using std::runtime_error::runtime_error;
};

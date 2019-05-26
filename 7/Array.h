#include <search.h>

template <typename T>
class Array{
public:
    explicit Array(size_t size = 0, const T& value = T());
    Array(const Array &);
    ~Array();
    Array& operator=(const Array &array);
    size_t size() const;
    T& operator[](size_t);
    const T& operator[](size_t) const;


private:
    size_t length;
    T* data;
};
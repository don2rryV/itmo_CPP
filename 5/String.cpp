#include <cstring>

#include "String.h"

String::String(char *s) {
    this->length = strlen(s);
    this->mStr = new char[this->length + 1];
    strcpy(this->mStr, s);
}

String::String(const String &_s) {
    this->length = _s.length;
    this->mStr = new char[this->length + 1];
    strcpy(this->mStr, _s.mStr);
}

String::String(size_t n, char c) {
    this->length = n;
    this->mStr = new char[n + 1];
    for (size_t i = 0; i < this->length; i++)
        this->mStr[i] = c;
}

String::~String() {
    delete[] mStr;
}

String &String::append(const String &s) {
    size_t n = this->length + strlen(s.mStr);

    char* buf = new char[n + 1];
    for (size_t i = 0; i < this->length; i++)
        buf[i] = this->mStr[i];
    for (size_t i = this->length, j = 0; i <= n; i++, j++)
        buf[i] = s.mStr[j];

    delete[] this->mStr;
    this->length = n;
    this->mStr = buf;

    return *this;
}

String &String::operator=(const String &s) {
    delete[] this->mStr;
    this->length = strlen(s.mStr);
    this->mStr = new char[this->length + 1];
    strcpy(this->mStr, s.mStr);
    return *this;
}

String &String::operator+=(const String &s) {
    append(s);
}

String String::operator+(const String &s) const {
    String bufStr = *this;
    bufStr.append(s);
    return bufStr;
}

std::ostream &operator<<(std::ostream &os, const String &obj) {
    return os << obj.mStr;
}

std::istream &operator>>(std::istream & is, String & obj) {
    char BUFF[2048];
    is.getline(BUFF, sizeof BUFF);
    obj = BUFF;
    return is;
}

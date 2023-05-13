#ifndef UNTITLED18_SUBS_H
#define UNTITLED18_SUBS_H

#include <string>

using namespace std;

enum SubType {
    Human, Organization
};

struct Subs {
    string first_name;
    string last_name;
    string phone_number;
    SubType type;
};

Subs PhoneSub(string first_name, string second_name, string phone_number, SubType type) {
    Subs Sub;
    Sub.first_name = first_name;
    Sub.last_name = second_name;
    Sub.phone_number = phone_number;
    Sub.type = type;
    return Sub;
}

#endif //UNTITLED18_SUBS_H

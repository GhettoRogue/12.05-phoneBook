#include <map>
#include "Subs.h"


using subject = pair<string, Subs>;

int main() {
    map<string, Subs> phoneBook;

    phoneBook.insert(subject("44-54-55", PhoneSub("Ivan", "Ivanov", "44-54-55", Human)));
    phoneBook.insert(subject("77-66-77", PhoneSub("Vladimir", "Ignatiew", "77-66-77", Organization)));

    return 0;
}